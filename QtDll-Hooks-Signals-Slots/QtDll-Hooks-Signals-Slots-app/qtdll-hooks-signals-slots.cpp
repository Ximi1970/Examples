#include "qtdll-hooks-signals-slots.h"
#include "../QtDll-Hooks-dll/qtdll-hooks-dll.h"
#include "../QtDll-Signals-Slots-dll/qtdll-signals-slots-dll.h"

/*
 *	Local includes
 */

/*
 *	Qt includes
 */
#include <QMainWindow>
#include <QTimer>
#include <QMessageBox>


/*
 *  Constructor
 */
QtDllHooksSignalsSlots::QtDllHooksSignalsSlots( QWidget* parent ) : QMainWindow( parent )
{
    Setup();

    m_dll = new SignalsSlotsDll();

    connect( this, &QtDllHooksSignalsSlots::testSignal, m_dll, &SignalsSlotsDll::testSlot );
    connect( m_dll, &SignalsSlotsDll::testSignal, this, &QtDllHooksSignalsSlots::testSlot );

    QTimer::singleShot( 2000, this, &QtDllHooksSignalsSlots::timerSlot );
}

/*
 * Destructor
 */
QtDllHooksSignalsSlots::~QtDllHooksSignalsSlots()
{
    delete m_dll;
}

void QtDllHooksSignalsSlots::timerSlot()
{
    QMessageBox::information( NULL, "QtDll", "Timeout", QMessageBox::Ok );

    emit testSignal();
}

void QtDllHooksSignalsSlots::testSlot()
{
    QMessageBox::information( NULL, "QtDllHooksSignalsSlots", "Signal received in Main", QMessageBox::Ok );
}


