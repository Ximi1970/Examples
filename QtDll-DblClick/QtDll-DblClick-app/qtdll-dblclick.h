#ifndef QTDLL_DBLCLICK_H
#define QTDLL_DBLCLICK_H

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

/**
 * @brief The ShadeX class
 */
class QtDllDblClick : public QMainWindow
{
    Q_OBJECT

    public:

        /**
         * @brief QtDllDblClick. Constructor.
         *
         *  @param parent   My parent.
         */
        explicit QtDllDblClick( QWidget* parent = nullptr );

};

#endif // QTDLL_DBLCLICK_H
