// ReflectiveInjectorDll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "ReflectiveInjectorDll.h"


// This is an example of an exported variable
REFLECTIVEINJECTORDLL_API int nReflectiveInjectorDll=0;

// This is an example of an exported function.
REFLECTIVEINJECTORDLL_API int fnReflectiveInjectorDll(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see ReflectiveInjectorDll.h for the class definition
CReflectiveInjectorDll::CReflectiveInjectorDll()
{
    return;
}
