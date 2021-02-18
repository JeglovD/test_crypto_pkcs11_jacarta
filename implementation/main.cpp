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
   CK_C_GetFunctionList p_get_function_list{ nullptr };
   if( ( p_get_function_list = ( CK_C_GetFunctionList )GetProcAddress( Library::Instance().PHandle(), "C_GetFunctionList" ) ) == nullptr )
      Throw( "GetProcAddress( C_GetFunctionList ) == nullptr" );

   // Получить структуру с указателями на функции
   CK_RV rv;
   CK_FUNCTION_LIST_PTR p_function_list{ nullptr };
   if( ( rv = ( *p_get_function_list )( &p_function_list ) ) != CKR_OK )
      Throw( "( *p_get_function_list )() != CKR_OK" );

   // Инициализировать библиотеку
   if( ( rv = p_function_list->C_Initialize( nullptr ) ) != CKR_OK )
      Throw( "C_Initialize() != CKR_OK" );

   // Получаем список слотов
   CK_ULONG slots_count;
   if( ( rv = p_function_list->C_GetSlotList( CK_TRUE, nullptr, &slots_count ) ) != CKR_OK )
      Throw( "C_GetSlotList( nullptr, &slots_count ) != CKR_OK" );
   if( !slots_count )
      Throw( "JaCarta smart cards not found" );
   std::cout << "slot_count = " << slots_count << std::endl;
   CK_SLOT_ID_PTR slots_array = ( CK_SLOT_ID_PTR )malloc( sizeof( CK_SLOT_ID ) * slots_count );
   if( ( rv = p_function_list->C_GetSlotList( CK_TRUE, slots_array, &slots_count ) ) != CKR_OK )
      Throw( "C_GetSlotList( p_slots, &slots_count ) != CKR_OK" );

   for( CK_ULONG it = 0; it < slots_count; ++it )
   {
      // Получаем информацию о токене
      CK_TOKEN_INFO token_info = {};
      if( ( rv = p_function_list->C_GetTokenInfo( slots_array[ it ], &token_info ) ) != CKR_OK )
         Throw( "C_GetTokenInfo() != CKR_OK" );
      std::cout << "token_info.model = " << token_info.model << std::endl;

      // Открываем сессию
      CK_SESSION_HANDLE session_handle;
      if( ( rv = p_function_list->C_OpenSession( slots_array[ it ], ( CKF_SERIAL_SESSION | CKF_RW_SESSION ), nullptr, nullptr, &session_handle ) ) != CKR_OK )
         Throw( "C_OpenSession() != CKR_OK" );

      // Получаем информацию о сертификатах
      CK_ULONG certificate_class = CKO_CERTIFICATE;
      CK_ATTRIBUTE certificate_attributes_array[] =
      {
         { CKA_CLASS, &certificate_class, sizeof( certificate_class ) }
      };
      if( ( p_function_list->C_FindObjectsInit( session_handle, certificate_attributes_array, sizeof( certificate_attributes_array ) / sizeof( CK_ATTRIBUTE ) ) ) != CKR_OK )
         Throw( "C_FindObjectsInit() != CKR_OK" );
      CK_OBJECT_HANDLE certificates_handle_array[ 128 ];
      CK_ULONG certificates_handle_count;
      if( ( rv = p_function_list->C_FindObjects( session_handle, certificates_handle_array, sizeof( certificates_handle_array ) / sizeof( CK_OBJECT_HANDLE ), &certificates_handle_count ) ) != CKR_OK )
         Throw( "C_FindObjects() != CKR_OK" );
      if( ( rv = p_function_list->C_FindObjectsFinal( session_handle ) ) != CKR_OK )
         Throw( "C_FindObjectsFinal() != CKR_OK" );
      for( CK_ULONG it = 0; it < certificates_handle_count; ++it )
      {
         CK_ATTRIBUTE certificate_values_template{ CKA_VALUE, nullptr, 0 };
         if( ( rv = p_function_list->C_GetAttributeValue( session_handle, certificates_handle_array[ it ], &certificate_values_template, 1 ) ) != CKR_OK )
            Throw( "C_GetAttributeValue() != CKR_OK" );
         std::cout << "certificate_values_template.ulValueLen = " << certificate_values_template.ulValueLen << std::endl;
         std::vector< unsigned char > certificate_value{};
         certificate_value.resize( certificate_values_template.ulValueLen );
         certificate_values_template.pValue = certificate_value.data();
         if( ( rv = p_function_list->C_GetAttributeValue( session_handle, certificates_handle_array[ it ], &certificate_values_template, 1 ) ) != CKR_OK )
            Throw( "C_GetAttributeValue() != CKR_OK" );
         std::cout << "certificate_values_template.pValue = ";
         for( auto& it: certificate_value )
            std::cout << std::hex << static_cast< unsigned short >( it );
         std::cout << std::endl;
      }

      // Закрываем сессию
      if( ( rv = p_function_list->C_CloseSession( session_handle ) ) != CKR_OK )
         Throw( "C_CloseSession() != CKR_OK" );
   }

   // Деинициализировать библиотеку
   if( ( rv = p_function_list->C_Finalize( nullptr ) ) != CKR_OK )
      Throw( "C_Finalize() != CKR_OK" );

   std::cout << "Ok" << std::endl;
   return 0;
}
