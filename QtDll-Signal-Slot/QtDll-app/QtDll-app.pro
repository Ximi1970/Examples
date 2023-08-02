#
#   Get the defaults
#
include( ../QtDll.pri )

#
#   Defines
#

#
# Set the Qt modules
#
QT += core gui widgets

#
# Define the target
#
TARGET = QtDll
TEMPLATE = app

#
#  Translations
#
TRANSLATIONS = \
    languages/$${TARGET}.en-US.ts

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
#CONFIG += staticlib

INCLUDEPATH += $$PWD/../QtDll-dll
DEPENDPATH += $$PWD/../QtDll-dll

#
#   System dependency
#
win32: {
#    QMAKE_LFLAGS += -static -lwinpthread -static-libgcc -static-libstdc++ $$(QMAKE_LFLAGS_WINDOWS)

    #
    #	Windows host (not used in cross compiling with mingw on Linux)
    #
    !mingw:contains(QMAKE_HOST.os, Windows): {
        LIBS += User32.lib
    }

    CONFIG(debug, debug|release) {
        LIBS += -L$$OUT_PWD/../QtDll-dll/debug/ -lQtDll-dll

        QMAKE_POST_LINK = $$[QT_INSTALL_BINS]\windeployqt.exe \"$$shell_path($${OUT_PWD}/debug/$${TARGET}.exe)\" &
    } else {
        LIBS += -L$$OUT_PWD/../QtDll-dll/release/ -lQtDll-dll

        QMAKE_POST_LINK = $$[QT_INSTALL_BINS]\windeployqt.exe \"$$shell_path($${OUT_PWD}/release/$${TARGET}.exe)\" &
    }
}

#
#	DO NOT COMPRESS THE RESOURCES. QFile.map() cannot handle it...
#
#QMAKE_RESOURCE_FLAGS += -no-compress


SOURCES += \
        main.cpp \
        qtdll.cpp

HEADERS += \
        qtdll.h

FORMS +=

# Default rules for deployment.
!isEmpty(target.path): INSTALLS += target


RESOURCES += \
        QtDll.qrc

win32:RC_FILE += \
        QtDll.rc

DISTFILES +=
