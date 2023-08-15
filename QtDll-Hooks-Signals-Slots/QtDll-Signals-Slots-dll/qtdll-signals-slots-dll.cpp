#include "qtdll-signals-slots-dll.h"

/*
 * Qt includes
 */
#include <QMessageBox>

	
SignalsSlotsDll::SignalsSlotsDll()
{
}

SignalsSlotsDll::~SignalsSlotsDll()
{
}

void SignalsSlotsDll::testSlot()
{
    QMessageBox::information( NULL, "QtDll", "Signal received in QtDllDll", QMessageBox::Ok );

    emit testSignal();
}
