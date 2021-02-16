#include <iomanip>

#include "P11Loader.h"

static const char PKCS_LIB_PATH[] = "p:/test_crypto_pkcs11_jacarta/lib/jcPKCS11-2.dll";

//namespace
//{
    /**************************
    Определяем имя библиотеки
    **************************/

#if defined(BUILD_WIN32) || defined(BUILD_WIN64)
    inline void * GetFunction(HMODULE hDll, const char * pFunctionName)
    {
        return GetProcAddress(hDll, pFunctionName);
    }
#elif defined(BUILD_OSX) || defined(BUILD_NIX)
    inline void * LoadSharedLibrary(const char * pFileName)
    {
        return dlopen(pFileName, 2);
    }
#else
#error Please build with -DBUILD_WIN, -DBUILD_NIX or -DBUILD_OSX
#endif


P11Loader::P11Loader()
    : m_Initialized(false)
    , m_Handle(0)
    , m_pFunctions(NULL)
    , m_pExFunctions(NULL)
{
    /**************************
    Загружаем библиотеку
    **************************/
    printf("Trying to load %s\n", PKCS_LIB_PATH);
    m_Handle = LoadSharedLibrary(PKCS_LIB_PATH);
    if (m_Handle == NULL)
    {
        printf("Load %s library failed.\n", PKCS_LIB_PATH);
        return;
    }
    else
    {
#if defined(BUILD_WIN32) || defined(BUILD_WIN64)
        char    szModuleName[MAX_PATH];
        DWORD    dwSize = sizeof(szModuleName);
        GetModuleFileNameA(m_Handle, szModuleName, dwSize);
        printf("Library loaded: %s\n", szModuleName);
#endif
    }

    /**********************************************************
    Загружаем стандартную функцию для получения списка функций
    **********************************************************/
    CK_C_GetFunctionList GetFunctionList = (CK_C_GetFunctionList) GetFunction(m_Handle, "C_GetFunctionList");
    if (GetFunctionList == NULL)
    {
        printf("C_GetFunctionList not found in module\n");
        return;
    }

    /************************************
    Загружаем стандартные PKCS #11 функции
    *************************************/
    CK_RV rv = GetFunctionList(&m_pFunctions);
    if (rv != CKR_OK)
    {
        std::cout << "C_GetFunctionList failed: 0x" << std::hex << rv <<std::endl;
        return;
    }

    /**********************************************************
    Загружаем стандартную функцию для получения списка функций-расширения
    **********************************************************/
    FP_JC_GetFunctionList GetFunctionListEx = (FP_JC_GetFunctionList) GetFunction(m_Handle, "JC_GetFunctionList");
    if (GetFunctionListEx == NULL)
    {
        printf("JC_GetFunctionList not found in module\n");
        return;
    }

    /************************************
    Загружаем функции-расширения
    *************************************/
    rv = GetFunctionListEx(&m_pExFunctions);
    if (rv != CKR_OK)
    {
        std::cout << "JC_GetFunctionList failed: 0x" << std::hex << rv << std::endl;
        return;
    }

    m_Initialized = true;
}

P11Loader::~P11Loader()
{
    FreeSharedLibrary(m_Handle);
}

#if defined (_MSC_VER)
    #pragma warning (disable:4640)
#endif

#ifdef WIN32
HMODULE P11Loader::GetModuleHandle()
{
    return m_Handle;
}
#else
void * P11Loader::GetModuleHandle()
{
    return m_Handle;
}
#endif

P11Loader& GetLoader()
{
    static P11Loader loader;
    return loader;
}
