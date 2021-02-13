#include "library.h"

Library& Library::Instance()
{
   static Library library;
   return library;
}

Library::Library():
   mPHandle{ LoadLibrary( "..\\lib\\jcPKCS11-2.dll" ) }
{
   if( !mPHandle )
      throw "!mPHandle";
}

Library::~Library()
{
   FreeLibrary( mPHandle );
}

const HMODULE& Library::PHandle()
{
   return mPHandle;
}
