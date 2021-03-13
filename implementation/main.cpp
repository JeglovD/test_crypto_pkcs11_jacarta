#include "library.h"
#include "../include/jcPKCS11.h"

#include <iostream>
#include <vector>

void Throw( std::string message )
{
   std::cerr << message.c_str() << std::endl;
   throw -1;
}

int main()
{
   // Получить адрес функции для получения структуры с указателями на функции
   CK_C_GetFunctionList get_function_list_ptr{ nullptr };
#ifdef windows
   if( ( get_function_list_ptr = ( CK_C_GetFunctionList )GetProcAddress( Library::Instance().HandlePtr(), "C_GetFunctionList" ) ) == nullptr )
      Throw( "GetProcAddress( C_GetFunctionList ) == nullptr" );
#elif unix
   if( ( get_function_list_ptr = ( CK_C_GetFunctionList )dlsym( Library::Instance().HandlePtr(), "C_GetFunctionList" ) ) == nullptr )
       Throw( "dlsym( C_GetFunctionList ) == nullptr" );
#endif

   // Получить структуру с указателями на функции
   CK_RV rv;
   CK_FUNCTION_LIST_PTR function_list_ptr{ nullptr };
   if( ( rv = ( *get_function_list_ptr )( &function_list_ptr ) ) != CKR_OK )
      Throw( "( *get_function_list_ptr )() != CKR_OK" );

   // Инициализировать библиотеку
   if( ( rv = function_list_ptr->C_Initialize( nullptr ) ) != CKR_OK )
      Throw( "C_Initialize() != CKR_OK" );

   // Получаем список слотов
   CK_ULONG slots_count;
   if( ( rv = function_list_ptr->C_GetSlotList( CK_TRUE, nullptr, &slots_count ) ) != CKR_OK )
      Throw( "C_GetSlotList( nullptr, &slots_count ) != CKR_OK" );
   if( !slots_count )
      Throw( "JaCarta smart cards not found" );
   std::cout << "slot_count = " << slots_count << std::endl;
   CK_SLOT_ID_PTR slots_array = ( CK_SLOT_ID_PTR )malloc( sizeof( CK_SLOT_ID ) * slots_count );
   if( ( rv = function_list_ptr->C_GetSlotList( CK_TRUE, slots_array, &slots_count ) ) != CKR_OK )
      Throw( "C_GetSlotList( slots_array, &slots_count ) != CKR_OK" );

   for( CK_ULONG it = 0; it < slots_count; ++it )
   {
      // Получаем информацию о токене
      CK_TOKEN_INFO token_info = {};
      if( ( rv = function_list_ptr->C_GetTokenInfo( slots_array[ it ], &token_info ) ) != CKR_OK )
         Throw( "C_GetTokenInfo() != CKR_OK" );
      std::cout << "token_info.model = " << token_info.model << std::endl;

      // Открываем сессию
      CK_SESSION_HANDLE session_handle;
      if( ( rv = function_list_ptr->C_OpenSession( slots_array[ it ], ( CKF_SERIAL_SESSION | CKF_RW_SESSION ), nullptr, nullptr, &session_handle ) ) != CKR_OK )
         Throw( "C_OpenSession() != CKR_OK" );

      // Получаем информацию о сертификатах
      CK_ULONG certificate_class = CKO_CERTIFICATE;
      CK_ATTRIBUTE certificate_attributes_array[] =
      {
         { CKA_CLASS, &certificate_class, sizeof( certificate_class ) }
      };
      if( ( function_list_ptr->C_FindObjectsInit( session_handle, certificate_attributes_array, sizeof( certificate_attributes_array ) / sizeof( CK_ATTRIBUTE ) ) ) != CKR_OK )
         Throw( "C_FindObjectsInit() != CKR_OK" );
      CK_OBJECT_HANDLE certificates_handle_array[ 128 ];
      CK_ULONG certificates_handle_count;
      if( ( rv = function_list_ptr->C_FindObjects( session_handle, certificates_handle_array, sizeof( certificates_handle_array ) / sizeof( CK_OBJECT_HANDLE ), &certificates_handle_count ) ) != CKR_OK )
         Throw( "C_FindObjects() != CKR_OK" );
      if( ( rv = function_list_ptr->C_FindObjectsFinal( session_handle ) ) != CKR_OK )
         Throw( "C_FindObjectsFinal() != CKR_OK" );
      for( CK_ULONG it = 0; it < certificates_handle_count; ++it )
      {
         CK_ATTRIBUTE certificate_values_template{ CKA_VALUE, nullptr, 0 };
         if( ( rv = function_list_ptr->C_GetAttributeValue( session_handle, certificates_handle_array[ it ], &certificate_values_template, 1 ) ) != CKR_OK )
            Throw( "C_GetAttributeValue() != CKR_OK" );
         std::cout << "certificate_values_template.ulValueLen = " << certificate_values_template.ulValueLen << std::endl;
         std::vector< unsigned char > certificate_value{};
         certificate_value.resize( certificate_values_template.ulValueLen );
         certificate_values_template.pValue = certificate_value.data();
         if( ( rv = function_list_ptr->C_GetAttributeValue( session_handle, certificates_handle_array[ it ], &certificate_values_template, 1 ) ) != CKR_OK )
            Throw( "C_GetAttributeValue() != CKR_OK" );
         std::cout << "certificate_values_template.pValue = ";
         for( auto& it: certificate_value )
            std::cout << std::hex << static_cast< unsigned short >( it );
         std::cout << std::endl;
      }

      // Закрываем сессию
      if( ( rv = function_list_ptr->C_CloseSession( session_handle ) ) != CKR_OK )
         Throw( "C_CloseSession() != CKR_OK" );
   }

   // Деинициализировать библиотеку
   if( ( rv = function_list_ptr->C_Finalize( nullptr ) ) != CKR_OK )
      Throw( "C_Finalize() != CKR_OK" );

   std::cout << "Ok" << std::endl;
   return 0;
}
