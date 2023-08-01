#include "qtdll-dblclick-dll.h"

// https://www.daniweb.com/programming/software-development/threads/213358/intercept-windows-mouse-events

#include <windows.h>
#include <stdio.h>


HHOOK hook = 0;
HHOOK hook2 = 0;
bool quit = false;
LRESULT CALLBACK ClickProc( int disabled, WPARAM wparam, LPARAM lparam );
LRESULT CALLBACK CbtProc( int nCode, WPARAM wparam, LPARAM lparam );
HMODULE modcpy;


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
    modcpy = hModule;
    return TRUE;
}


QTDLL_DBLCLICK_DLL_EXPORT void Setup()
{
    hook = SetWindowsHookExA( WH_MOUSE, ClickProc, modcpy, 0 );

    hook2 = SetWindowsHookExA( WH_CBT, CbtProc, modcpy, 0 );

    MSG msg;

    Beep( 660, 100 );

    if( hook != 0 )  //Hook Succeeded
    {
        Beep( 880, 300 );
    }
    else           //Hook Failed
    {
        Beep( 440, 300 );
    }

    /*
    while( GetMessage( &msg, 0, 0, 0 ) && ( quit == false ) )
    {
        TranslateMessage( &msg );
        DispatchMessage( &msg );
    }
    */
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

    return CallNextHookEx( hook, 0, wParam, lParam );
}

LRESULT CALLBACK CbtProc( int nCode, WPARAM wParam, LPARAM lParam )
{
    if( nCode == HCBT_SYSCOMMAND )
    {
        switch( wParam )
        {
            case SC_MINIMIZE:
            case SC_MAXIMIZE:
                return 1;
            default:
                break;
        }
    }

    return CallNextHookEx( NULL, nCode, wParam, lParam );
}
