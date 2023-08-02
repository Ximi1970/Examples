#include "qtdll-dll.h"

/*
 * Qt includes
 */
#include <QMessageBox>

	
QtDllDll::QtDllDll()
{
}

QtDllDll::~QtDllDll()
{
}

void QtDllDll::QtDllDllSlot()
{
    QMessageBox::information( NULL, "QtDll", "Signal received in QtDllDll", QMessageBox::Ok );

    emit QtDllDllSignal();
}
