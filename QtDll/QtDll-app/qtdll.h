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

};

#endif // QTDLL_H
