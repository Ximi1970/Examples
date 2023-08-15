#ifndef MOUSEHOOK_DLL_H
#define MOUSEHOOK_DLL_H

#if defined( MOUSEHOOK_DLL_LIBRARY )
    #define MOUSEHOOK_DLL_EXPORT __declspec( dllexport )
#else
    #define MOUSEHOOK_DLL_EXPORT __declspec( dllimport )
#endif

MOUSEHOOK_DLL_EXPORT void    SetHook();
MOUSEHOOK_DLL_EXPORT void    UnHook();

#endif
