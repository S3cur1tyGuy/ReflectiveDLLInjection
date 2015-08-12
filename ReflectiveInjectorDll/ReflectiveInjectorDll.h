// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the REFLECTIVEINJECTORDLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// REFLECTIVEINJECTORDLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef REFLECTIVEINJECTORDLL_EXPORTS
#define REFLECTIVEINJECTORDLL_API __declspec(dllexport)
#else
#define REFLECTIVEINJECTORDLL_API __declspec(dllimport)
#endif

// This class is exported from the ReflectiveInjectorDll.dll
class REFLECTIVEINJECTORDLL_API CReflectiveInjectorDll {
public:
	CReflectiveInjectorDll(void);
	// TODO: add your methods here.
};

extern REFLECTIVEINJECTORDLL_API int nReflectiveInjectorDll;

REFLECTIVEINJECTORDLL_API int fnReflectiveInjectorDll(void);
