#include "cbthook-dll.h"

#include <windows.h>
#include <stdio.h>


HHOOK m_hook = 0;
LRESULT CALLBACK CbtProc( int nCode, WPARAM wparam, LPARAM lparam );
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


CBTHOOK_DLL_EXPORT void SetHook()
{
    /*
     * This hook wil not work with Firefox, Thunderbird and some other apps
     * They will need a special DLL injection
     * https://stackoverflow.com/questions/18310423/firefox-pr-write-hook-dll-injection-windows-hooks
     */
    m_hook = SetWindowsHookExA( WH_CBT, CbtProc, m_hMod, 0 );

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


CBTHOOK_DLL_EXPORT void UnHook()
{
    UnhookWindowsHookEx( m_hook );
}


LRESULT CALLBACK CbtProc( int nCode, WPARAM wParam, LPARAM lParam )
{
    if( nCode == HCBT_SYSCOMMAND )
    {
        switch( wParam )
        {
            case SC_MINIMIZE:
            case SC_MAXIMIZE:
                /*
                 * Block minimize and maximize
                 */
                Beep( 550, 100 );

                return 1;
            default:
                break;
        }
    }

    return CallNextHookEx( NULL, nCode, wParam, lParam );
}
