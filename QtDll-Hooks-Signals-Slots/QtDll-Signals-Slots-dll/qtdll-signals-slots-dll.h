#ifndef QTDLL_SIGNALS_SLOTS_DLL_H
#define QTDLL_SIGNALS_SLOTS_DLL_H

#if defined( QTDLL_SIGNALS_SLOTS_LIBRARY )
    #define QTDLL_SIGNALS_SLOTS_EXPORT __declspec( dllexport )
#else
    #define QTDLL_SIGNALS_SLOTS_EXPORT __declspec( dllimport )
#endif

#include <QObject>

class QTDLL_SIGNALS_SLOTS_EXPORT SignalsSlotsDll : public QObject
{
	Q_OBJECT

	public:
	
        SignalsSlotsDll();
        ~SignalsSlotsDll();
		
    signals:
	
        void testSignal();
		
    public slots:
	
        void testSlot();

};

#endif
