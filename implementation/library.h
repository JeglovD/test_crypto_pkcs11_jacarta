#pragma once

#include <Windows.h>

class Library
{
public:
   static Library& Instance();
   ~Library();
   const HMODULE& PHandle();

private:
   Library();
   Library( const Library& ) = delete;
   Library& operator=( Library& ) = delete;

   HMODULE mHandlePtr{ nullptr };
};
