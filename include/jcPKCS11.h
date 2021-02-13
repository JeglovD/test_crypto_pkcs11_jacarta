#ifndef JCPKCS11_H
#define JCPKCS11_H

#include "cryptoki.h"

#if !defined(_WIN32)
    #ifdef CK_EXPORT_SPEC
        #undef CK_EXPORT_SPEC
    #endif
    #define CK_EXPORT_SPEC __attribute__((visibility("default")))
#endif

#pragma pack(push, 1)

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __PASTE
#define __PASTE(x, y) x##y
#endif

#define CK_NEED_ARG_LIST  1
#define CK_PKCS11_FUNCTION_INFO_TYPED(returnValue, name) extern CK_DECLARE_FUNCTION(returnValue, name)
#define CK_PKCS11_FUNCTION_INFO(name) CK_PKCS11_FUNCTION_INFO_TYPED(CK_RV, name)
#include "jcPKCS11f.h"
#undef CK_NEED_ARG_LIST
#undef CK_PKCS11_FUNCTION_INFO
#undef CK_PKCS11_FUNCTION_INFO_TYPED

#define CK_NEED_ARG_LIST  1
#define CK_PKCS11_FUNCTION_INFO_TYPED(returnValue, name) typedef CK_DECLARE_FUNCTION_POINTER(returnValue, __PASTE(FP_,name))
#define CK_PKCS11_FUNCTION_INFO(name) CK_PKCS11_FUNCTION_INFO_TYPED(CK_RV, name)
#include "jcPKCS11f.h"
#undef CK_NEED_ARG_LIST
#undef CK_PKCS11_FUNCTION_INFO
#undef CK_PKCS11_FUNCTION_INFO_TYPED

#define CK_PKCS11_FUNCTION_INFO(name) __PASTE(FP_,name) name;
#define CK_PKCS11_FUNCTION_INFO_TYPED(returnValue, name) CK_PKCS11_FUNCTION_INFO(name);
struct JC_FUNCTION_LIST
{
    CK_VERSION    version;  /* Extension version */
#include "jcPKCS11f.h"
};
#undef CK_PKCS11_FUNCTION_INFO
#undef CK_PKCS11_FUNCTION_INFO_TYPED

#ifdef __cplusplus
} /* extern "C" */
#endif

#pragma pack(pop)

#endif /* JCPKCS11_H */
