#include "qtdll.h"

/*
 *	Local includes
 */

/*
 *	Qt includes
 */
#include <QWindow>

/*
 *  Constructor
 */
QtDll::QtDll( QWindow *parent ) : QWindow( parent )
{
    show();
}
