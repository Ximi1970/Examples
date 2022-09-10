/*
 *	Local includes
 */
#include "qtdll.h"
#include "../QtDll-dll/QtDll-dll.h"

/*
 *	Qt includes
 */
#include <QApplication>


/*
 * Main
 */
int main( int argc, char *argv[] )
{
    Setup();

    QApplication a( argc, argv );

    QtDll qtdll;

    return a.exec();
}
