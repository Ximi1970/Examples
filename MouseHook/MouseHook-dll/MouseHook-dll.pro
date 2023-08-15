#
#	Remove core Qt libs
#
QT       -= core gui

TARGET = MouseHook
TEMPLATE = lib

include(../MouseHook.pri)

DEFINES += MOUSEHOOK_DLL_LIBRARY

#
#	Clear Qt dependencies
#
QMAKE_INCDIR =
QMAKE_INCDIR_QT =
QMAKE_LIBDIR_QT =

LIBS += User32.lib

SOURCES += \
    mousehook-dll.cpp

HEADERS += \
    mousehook-dll.h
