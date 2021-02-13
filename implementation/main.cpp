#include "library.h"
#include "../include/jcPKCS11.h"

#include <iostream>

int main()
{
   // Получить адрес функции для получения структуры с указателями на функции
   CK_C_GetFunctionList p_get_function_list{ nullptr };
   if( ( p_get_function_list = ( CK_C_GetFunctionList )GetProcAddress( Library::Instance().PHandle(), "C_GetFunctionList" ) ) == nullptr )
      throw "GetProcAddress( C_GetFunctionList ) == nullptr";

   // Получить структуру с указателями на функции
   CK_RV rv;
   CK_FUNCTION_LIST_PTR p_function_list{ nullptr };
   if( ( rv = ( *p_get_function_list )( &p_function_list ) ) != CKR_OK )
      throw "( *p_get_function_list )() != CKR_OK";

   // Инициализировать библиотеку
   if( ( rv = p_function_list->C_Initialize( nullptr ) ) != CKR_OK )
      throw "C_Initialize() != CKR_OK";

   // Получить информацию о библиотеке
   CK_INFO library_info;
   if( ( rv = p_function_list->C_GetInfo( &library_info ) ) != CKR_OK )
      throw "C_GetInfo() != CKR_OK";
   std::cout << "library_info.libraryDescription = " << library_info.libraryDescription << std::endl;

   // Деинициализировать библиотеку
   if( ( rv = p_function_list->C_Finalize( nullptr ) ) != CKR_OK )
      throw "C_Finalize() != CKR_OK";
}
