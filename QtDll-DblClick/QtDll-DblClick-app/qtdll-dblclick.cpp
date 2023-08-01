#include "qtdll-dblclick.h"
#include "../QtDll-DblClick-dll/qtdll-dblclick-dll.h"

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
QtDllDblClick::QtDllDblClick( QWidget* parent ) : QMainWindow( parent )
{
    Setup();
}
