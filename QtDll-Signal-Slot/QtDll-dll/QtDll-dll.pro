TARGET = QtDll-dll
TEMPLATE = lib

include(../QtDll.pri)

#
# Set the Qt modules
#
QT += core gui widgets

DEFINES += QTDLL_DLL_LIBRARY

LIBS += User32.lib

SOURCES += \
    QtDll-dll.cpp

HEADERS += \
    QtDll-dll.h
