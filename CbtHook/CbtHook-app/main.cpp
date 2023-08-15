/*
 *	Local includes
 */
#include "cbthook.h"

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

    CbtHook cbtHook;
    cbtHook.show();

    return a.exec();
}
