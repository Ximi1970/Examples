/*
 *	Local includes
 */
#include "qtdll-dblclick.h"

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

    QtDllDblClick qtdlldblclick;
    qtdlldblclick.show();

    return a.exec();
}
