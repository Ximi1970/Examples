#include "qtdll.h"
#include "../QtDll-dll/QtDll-dll.h"

/*
 *	Local includes
 */

/*
 *	Qt includes
 */
#include <QWindow>
#include <QMessageBox>

/*
 *  Constructor
 */
QtDll::QtDll( QWindow *parent ) : QWindow( parent )
{
    m_dll = new QtDllDll();

    connect( this, &QtDll::QtDllSignal, m_dll, &QtDllDll::QtDllDllSlot );
    connect( m_dll, &QtDllDll::QtDllDllSignal, this, &QtDll::QtDllSlot );

    show();
}

QtDll::~QtDll()
{
    delete m_dll;
}

void QtDll::QtDllSlot()
{
    QMessageBox::information( NULL, "QtDll", "Signal received by QtDll", QMessageBox::Ok );
}
