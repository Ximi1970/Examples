#ifndef CBTHOOK_H
#define CBTHOOK_H

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
 * @brief The CbtHook class
 */
class CbtHook : public QMainWindow
{
    Q_OBJECT

    public:

        /**
         * @brief CbtHook. Constructor.
         *
         *  @param parent   My parent.
         */
        explicit CbtHook( QWidget* parent = nullptr );

        /**
         * @brief ~CbtHook. Destructor.
         */
        ~CbtHook();

};

#endif // CBTHOOK_H
