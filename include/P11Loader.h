#ifndef P11LOADER_H
#define P11LOADER_H

#ifdef WIN32
#include <windows.h>
#else
#include <dlfcn.h>
#endif
// Jeglov
//#include <jcPKCS11.h>
#include "jcPKCS11.h"

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <iostream>


#if defined(BUILD_WIN32) || defined(BUILD_WIN64)
#define FreeSharedLibrary FreeLibrary
    inline void * GetFunction(HMODULE hDll, const char * pFunctionName);
    #define LoadSharedLibrary LoadLibraryA
#elif defined(BUILD_OSX) || defined(BUILD_NIX)
    #define FreeSharedLibrary dlclose
    #define GetFunction dlsym
    inline void * LoadSharedLibrary(const char * pFileName);
#else
#error Please build with -DBUILD_WIN, -DBUILD_NIX or -DBUILD_OSX
#endif


// макрос для вызова стандартной функции из загруженной библиотеки. Предполагает, что вызывающий объявил переменную P11Loader loader
#ifndef CALL_P11
#define CALL_P11(func) \
    loader.functions()->func
#endif //CALL_P11
// макрос для вызова функции-расширения. Предполагает, что вызывающий объявил переменную P11Loader loader
#ifndef CALL_EXT
#define CALL_EXT(func) \
    loader.exFunctions()->func
#endif //CALL_EXT

class P11Loader
{
private:
    //признак инициализации
    bool m_Initialized;

    // указатель на загруженную библиотеку
#ifdef WIN32
    HMODULE m_Handle;
#else
    void * m_Handle;
#endif

    // указатель на набор стандартных PKCS#11 функций
    CK_FUNCTION_LIST_PTR m_pFunctions;
    // указатель на набор функций -расширений
    JC_FUNCTION_LIST_PTR m_pExFunctions;

public:
    P11Loader();
    ~P11Loader();

    // получить указатель на стандартные загруженные функции
    CK_FUNCTION_LIST_PTR functions() const
    {
        return m_pFunctions;
    }

    // получить указатель на функции-расширения
    JC_FUNCTION_LIST_PTR exFunctions() const
    {
        return m_pExFunctions;
    }

    bool IsInitialized() const
    {
        return m_Initialized;
    }

#ifdef WIN32
    HMODULE GetModuleHandle();
#else
    void * GetModuleHandle();
#endif
};

P11Loader& GetLoader();

#endif // P11LOADER_H
