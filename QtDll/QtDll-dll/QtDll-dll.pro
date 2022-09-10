#
#	Remove core Qt libs
#
QT       -= core gui

TARGET = QtDll-dll
TEMPLATE = lib

#CONFIG += staticlib

include(../QtDll.pri)

DEFINES += QTDLL_DLL_LIBRARY

#
#	Clear Qt dependencies
#
QMAKE_INCDIR =
QMAKE_INCDIR_QT =
QMAKE_LIBDIR_QT =

LIBS += User32.lib

SOURCES += \
    QtDll-dll.cpp

HEADERS += \
    QtDll-dll.h
