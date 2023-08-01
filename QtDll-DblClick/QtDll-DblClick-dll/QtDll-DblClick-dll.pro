#
#	Remove core Qt libs
#
QT       -= core gui

TARGET = QtDll-DblClick-dll
TEMPLATE = lib

#CONFIG += staticlib

include(../QtDll-DblClick.pri)

DEFINES += QTDLL_DBLCLICK_DLL_LIBRARY

#
#	Clear Qt dependencies
#
QMAKE_INCDIR =
QMAKE_INCDIR_QT =
QMAKE_LIBDIR_QT =

LIBS += User32.lib

SOURCES += \
    qtdll-dblclick-dll.cpp

HEADERS += \
    qtdll-dblclick-dll.h
