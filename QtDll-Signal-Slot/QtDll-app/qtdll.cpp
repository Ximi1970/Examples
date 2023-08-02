#include "qtdll.h"
#include "../QtDll-dll/QtDll-dll.h"

/*
 *	Local includes
 */

/*
 *	Qt includes
 */
#include <QWindow>
#include <QTimer>
#include <QMessageBox>

/*
 *  Constructor
 */
QtDll::QtDll( QWindow *parent ) : QWindow( parent )
{
    m_dll = new QtDllDll();

    connect( this, &QtDll::QtDllSignal, m_dll, &QtDllDll::QtDllDllSlot );
    connect( m_dll, &QtDllDll::QtDllDllSignal, this, &QtDll::QtDllSlot );

    QTimer::singleShot( 2000, this, &QtDll::TimerSlot );

    show();
}

QtDll::~QtDll()
{
    delete m_dll;
}

void QtDll::TimerSlot()
{
    QMessageBox::information( NULL, "QtDll", "Timeout", QMessageBox::Ok );

    emit QtDllSignal();
}

void QtDll::QtDllSlot()
{
    QMessageBox::information( NULL, "QtDll", "Signal received in QtDll", QMessageBox::Ok );
}
