#include "mousehook.h"
#include "../MouseHook-dll/mousehook-dll.h"

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
MouseHook::MouseHook( QWidget* parent ) : QMainWindow( parent )
{
    SetHook();
}


MouseHook::~MouseHook()
{
    UnHook();
}
