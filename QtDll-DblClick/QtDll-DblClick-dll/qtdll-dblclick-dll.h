#ifndef QTDLL_DBLCLICK_DLL_H
#define QTDLL_DBLCLICK_DLL_H

#if defined( QTDLL_DBLCLICK_DLL_LIBRARY )
    #define QTDLL_DBLCLICK_DLL_EXPORT __declspec( dllexport )
#else
    #define QTDLL_DBLCLICK_DLL_EXPORT __declspec( dllimport )
#endif

QTDLL_DBLCLICK_DLL_EXPORT void    Setup();

#endif
