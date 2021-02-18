#include "library.h"

Library& Library::Instance()
{
   static Library library;
   return library;
}

Library::Library():
   mHandlePtr{ LoadLibrary( "..\\lib\\jcPKCS11-2.dll" ) }
{
   if( !mHandlePtr )
      throw "!mHandlePtr";
}

Library::~Library()
{
   FreeLibrary( mHandlePtr );
}

const HMODULE& Library::PHandle()
{
   return mHandlePtr;
}
