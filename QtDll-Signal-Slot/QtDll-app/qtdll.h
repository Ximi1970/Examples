#ifndef QTDLL_H
#define QTDLL_H

/*
 *	Local includes
 */

/*
 *	Qt includes
 */
#include <QWindow>

/*
 *	Predefines
 */
class QtDllDll;

/**
 * @brief The ShadeX class
 */
class QtDll : public QWindow
{
    Q_OBJECT

    public:

        /**
         * @brief QtDll. Constructor.
         *
         *  @param parent   My parent.
         */
        explicit QtDll( QWindow *parent = nullptr );
        ~QtDll();

    signals:

        void QtDllSignal();

    public slots:

        /**
         * @brief TimerSlot. Slot for the timer.
         */
        void TimerSlot();

        /**
         * @brief QtDllSlot. Test slot.
         */
        void QtDllSlot();

    private:

        /**
         * @brief m_dll. Dll pointer.
         */
        QtDllDll* m_dll;

};

#endif // QTDLL_H
