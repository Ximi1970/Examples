#ifndef CBTHOOK_DLL_H
#define CBTHOOK_DLL_H

#if defined( CBTHOOK_DLL_LIBRARY )
    #define CBTHOOK_DLL_EXPORT __declspec( dllexport )
#else
    #define CBTHOOK_DLL_EXPORT __declspec( dllimport )
#endif

CBTHOOK_DLL_EXPORT void    SetHook();
CBTHOOK_DLL_EXPORT void    UnHook();

#endif
