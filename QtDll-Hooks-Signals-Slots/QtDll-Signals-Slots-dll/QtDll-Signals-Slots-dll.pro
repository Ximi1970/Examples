TARGET = QtDll-Signals-Slots
TEMPLATE = lib

include(../QtDll-Hooks-Signals-Slots.pri)

#
# Set the Qt modules
#
QT += core gui widgets

DEFINES += QTDLL_SIGNALS_SLOTS_LIBRARY

LIBS += User32.lib

SOURCES += \
    qtdll-signals-slots-dll.cpp

HEADERS += \
    qtdll-signals-slots-dll.h
