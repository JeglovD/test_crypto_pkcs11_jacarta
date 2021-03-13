#include "library.h"

Library& Library::Instance()
{
   static Library library;
   return library;
}

Library::Library():
#ifdef windows
    mHandlePtr{ LoadLibrary( "..\\lib\\jcPKCS11-2.dll" ) }
#elif unix
    mHandlePtr{ dlopen( "..\\lib\\jcPKCS11-2.dll", RTLD_LAZY ) }
#endif
{
    if( !mHandlePtr )
        throw "!mHandlePtr";
}

Library::~Library()
{
#ifdef windows
    FreeLibrary( mHandlePtr );
#elif unix
    dlclose( mHandlePtr );
#endif
}

#ifdef windows
const HMODULE& Library::HandlePtr()
{
   return mHandlePtr;
}
#elif unix
void* Library::HandlePtr()
{
   return mHandlePtr;
}
#endif
