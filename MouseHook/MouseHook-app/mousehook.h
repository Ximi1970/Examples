#ifndef MOUSEHOOK_H
#define MOUSEHOOK_H

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
 * @brief The MouseHook class
 */
class MouseHook : public QMainWindow
{
    Q_OBJECT

    public:

        /**
         * @brief MouseHook. Constructor.
         *
         *  @param parent   My parent.
         */
        explicit MouseHook( QWidget* parent = nullptr );

        /**
         * @brief ~MouseHook. Destructor.
         */
        ~MouseHook();

};

#endif // MOUSEHOOK_H
