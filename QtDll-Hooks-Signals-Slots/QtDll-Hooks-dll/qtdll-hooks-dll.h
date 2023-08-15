#ifndef QTDLL_HOOKS_DLL_H
#define QTDLL_HOOKS_DLL_H

#if defined( QTDLL_HOOKS_LIBRARY )
    #define QTDLL_HOOKS_EXPORT __declspec( dllexport )
#else
    #define QTDLL_HOOKS_EXPORT __declspec( dllimport )
#endif

QTDLL_HOOKS_EXPORT void    Setup();

#endif
