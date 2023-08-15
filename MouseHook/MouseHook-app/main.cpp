/*
 *	Local includes
 */
#include "mousehook.h"

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

    MouseHook mouseHook;
    mouseHook.show();

    return a.exec();
}
