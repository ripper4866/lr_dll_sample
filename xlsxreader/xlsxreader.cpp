// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
//#include <Windows.h>
//#include <xlnt/xlnt.hpp>
// C:\vcpkg - master\installed\x86 - windows\include\xlnt\xlnt.hpp
// C:\vcpkg-master\installed\x86-windows\xlnt.dll
//using namespace xlnt;

extern "C" __declspec(dllexport) int sub(int a, int b);

typedef int (*pAdd) (int a, int b);

__declspec(dllexport)
int sub(int a, int b)
{
    //HINSTANCE hinstance = LoadLibrary(_T("C:\\vcpkg-master\\installed\\x86-windows\\xlnt.dll"));
    //if (!hinstance) {
    //    return std::cout << "XLNT dll loading failed \n";
    //}

    //pAdd Obj = (pAdd)GetProcAddress(hinstance, "Add");

    //if (Obj) {
    //    int iResult = 
    //}

    return a - b;
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

