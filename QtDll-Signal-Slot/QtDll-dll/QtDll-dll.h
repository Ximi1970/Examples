#ifndef QTDLL_DLL_H
#define QTDLL_DLL_H

#if defined( QTDLL_DLL_LIBRARY )
    #define QTDLL_DLL_EXPORT __declspec( dllexport )
#else
    #define QTDLL_DLL_EXPORT __declspec( dllimport )
#endif

#include <QObject>

class QTDLL_DLL_EXPORT QtDllDll : public QObject
{
	Q_OBJECT

	public:
	
        QtDllDll();
        ~QtDllDll();
		
    signals:
	
        void QtDllDllSignal();
		
    public slots:
	
        void QtDllDllSlot();

};

#endif
