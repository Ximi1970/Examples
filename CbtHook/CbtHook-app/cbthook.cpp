#include "cbthook.h"
#include "../CbtHook-dll/cbthook-dll.h"

/*
 *	Local includes
 */

/*
 *	Qt includes
 */
#include <QMainWindow>


/*
 *  Constructor
 */
CbtHook::CbtHook( QWidget* parent ) : QMainWindow( parent )
{
    SetHook();
}


CbtHook::~CbtHook()
{
    UnHook();
}
