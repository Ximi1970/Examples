TEMPLATE = subdirs
CONFIG += ordered

#
#	Get the defaults
#
include( QtDll-Hooks-Signals-Slots.pri )

#
#	The projects
#
SUBDIRS += QtDll-Hooks-dll
SUBDIRS += QtDll-Signals-Slots-dll
SUBDIRS += QtDll-Hooks-Signals-Slots-app
