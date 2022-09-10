#ifndef QTDLL_DLL_H
#define QTDLL_DLL_H

#if defined( QTDLL_DLL_LIBRARY )
    #define QTDLL_DLL_EXPORT __declspec( dllexport )
#else
    #define QTDLL_DLL_EXPORT __declspec( dllimport )
#endif

QTDLL_DLL_EXPORT void    Setup();

#endif
