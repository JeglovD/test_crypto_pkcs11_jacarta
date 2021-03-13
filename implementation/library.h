#pragma once

#ifdef windows
#include <Windows.h>
#elif unix
#include <dlfcn.h>
#endif

class Library
{
public:
   static Library& Instance();
   ~Library();
#ifdef windows
   const HMODULE& HandlePtr();
#elif unix
   void* HandlePtr();
#endif

private:
   Library();
   Library( const Library& ) = delete;
   Library& operator=( Library& ) = delete;

#ifdef windows
   HMODULE mHandlePtr{ nullptr };
#elif unix
   void* mHandlePtr{ nullptr };
#endif
};
