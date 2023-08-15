#
#	Remove core Qt libs
#
QT       -= core gui

TARGET = QtDll-Hooks
TEMPLATE = lib

include(../QtDll-Hooks-Signals-Slots.pri)

DEFINES += QTDLL_HOOKS_LIBRARY

#
#	Clear Qt dependencies
#
QMAKE_INCDIR =
QMAKE_INCDIR_QT =
QMAKE_LIBDIR_QT =

LIBS += User32.lib

SOURCES += \
    qtdll-hooks-dll.cpp

HEADERS += \
    qtdll-hooks-dll.h
