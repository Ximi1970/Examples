#
#   Get the defaults
#
include( ../CbtHook.pri )

#
#   Defines
#

#
# Set the Qt modules
#
QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#
# Define the target
#
TARGET = CbtHook
TEMPLATE = app

#
#  Translations
#
TRANSLATIONS = \
    languages/Lang.en-US.ts

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

INCLUDEPATH += $$PWD/../CbtHook-dll
DEPENDPATH += $$PWD/../CbtHook-dll

#
#   System dependency
#
win32: {
    #
    #	Windows host (not used in cross compiling with mingw on Linux)
    #
    !mingw:contains(QMAKE_HOST.os, Windows): {
        LIBS += User32.lib
    }

    CONFIG(debug, debug|release) {
        LIBS += -L$$OUT_PWD/../CbtHook-dll/debug/ -lCbtHook

        QMAKE_POST_LINK = $$[QT_INSTALL_BINS]\windeployqt.exe \"$$shell_path($${OUT_PWD}/debug/$${TARGET}.exe)\" &
    } else {
        LIBS += -L$$OUT_PWD/../CbtHook-dll/release/ -lCbtHook

        QMAKE_POST_LINK = $$[QT_INSTALL_BINS]\windeployqt.exe \"$$shell_path($${OUT_PWD}/release/$${TARGET}.exe)\" &
    }
}

SOURCES += \
        main.cpp \
        cbthook.cpp

HEADERS += \
        cbthook.h

FORMS +=

# Default rules for deployment.
!isEmpty(target.path): INSTALLS += target


RESOURCES += \
        CbtHook.qrc

win32:RC_FILE += \
        CbtHook.rc

DISTFILES +=
