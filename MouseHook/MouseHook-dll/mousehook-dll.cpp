#include "mousehook-dll.h"

// https://www.daniweb.com/programming/software-development/threads/213358/intercept-windows-mouse-events

#include <windows.h>
#include <stdio.h>


HHOOK m_hook = 0;
LRESULT CALLBACK ClickProc( int disabled, WPARAM wparam, LPARAM lparam );
HMODULE m_hMod;


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch( ul_reason_for_call )
    {
        case DLL_PROCESS_ATTACH:
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
        case DLL_PROCESS_DETACH:
        {
            break;
        }
    }
    m_hMod = hModule;
    return TRUE;
}


MOUSEHOOK_DLL_EXPORT void SetHook()
{
    m_hook = SetWindowsHookExA( WH_MOUSE, ClickProc, m_hMod, 0 );

    Beep( 660, 100 );

    if( m_hook != 0 )  //Hook Succeeded
    {
        Beep( 880, 300 );
    }
    else           //Hook Failed
    {
        Beep( 440, 300 );
    }
}


MOUSEHOOK_DLL_EXPORT void UnHook()
{
    UnhookWindowsHookEx( m_hook );
}


LRESULT CALLBACK ClickProc( int disabled, WPARAM wParam, LPARAM lParam )
{
    MOUSEHOOKSTRUCT* pMouseStruct = (MOUSEHOOKSTRUCT*)lParam;

    if( pMouseStruct != NULL )
    {
        if(  wParam == WM_LBUTTONDBLCLK || wParam == WM_NCLBUTTONDBLCLK )
        {
            Beep( 550, 100 );
        }
    }

    return CallNextHookEx( m_hook, 0, wParam, lParam );
}
