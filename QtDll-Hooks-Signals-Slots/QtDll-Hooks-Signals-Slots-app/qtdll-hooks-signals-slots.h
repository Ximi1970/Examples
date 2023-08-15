#ifndef QTDLL_HOOKS_SIGNALS_SLOTS_H
#define QTDLL_HOOKS_SIGNALS_SLOTS_H

/*
 *	Local includes
 */

/*
 *	Qt includes
 */
#include <QMainWindow>

/*
 *	Predefines
 */
class QWidget;
class SignalsSlotsDll;

/**
 * @brief The ShadeX class
 */
class QtDllHooksSignalsSlots: public QMainWindow
{
    Q_OBJECT

    public:

        /**
         * @brief QtDllHooksSignalsSlots. Constructor.
         *
         *  @param parent   My parent.
         */
        explicit QtDllHooksSignalsSlots( QWidget* parent = nullptr );
        ~QtDllHooksSignalsSlots();

    signals:

        /**
         * @brief testSignal. A test signal.
         */
        void testSignal();

    public slots:

        /**
         * @brief timerSlot. Slot for a timer timeout.
         */
        void timerSlot();

        /**
         * @brief testSlot. Test slot for a signal.
         */
        void testSlot();

    private:

        /**
         * @brief m_dll. Pointer to the dll.
         */
        SignalsSlotsDll* m_dll;

};

#endif // QTDLL_HOOKS_SIGNALS_SLOTS_H
