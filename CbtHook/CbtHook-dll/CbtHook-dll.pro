#
#	Remove core Qt libs
#
QT       -= core gui

TARGET = CbtHook
TEMPLATE = lib

include(../CbtHook.pri)

DEFINES += CBTHOOK_DLL_LIBRARY

#
#	Clear Qt dependencies
#
QMAKE_INCDIR =
QMAKE_INCDIR_QT =
QMAKE_LIBDIR_QT =

LIBS += User32.lib

SOURCES += \
    cbthook-dll.cpp

HEADERS += \
    cbthook-dll.h
