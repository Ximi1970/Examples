/*
 *	Local includes
 */
#include "qtdll.h"

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

    QtDll qtdll;

    return a.exec();
}
