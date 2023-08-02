TEMPLATE = subdirs
CONFIG += ordered

#
#	Get the defaults
#
include( QtDll.pri )

#
#	The projects
#
SUBDIRS += QtDll-dll
SUBDIRS += QtDll-app
