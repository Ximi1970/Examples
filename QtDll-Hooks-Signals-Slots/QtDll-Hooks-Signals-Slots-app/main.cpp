/*
 *	Local includes
 */
#include "qtdll-hooks-signals-slots.h"

/*
 *	Qt includes
 */
#include <QApplication>


/*
 * Main
 */
int main( int argc, char *argv[] )
{
    QApplication a( argc, argv );

    QtDllHooksSignalsSlots qtdllHooksSignalsSlots;
    qtdllHooksSignalsSlots.show();

    return a.exec();
}
