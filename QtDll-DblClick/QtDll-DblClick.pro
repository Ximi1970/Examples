TEMPLATE = subdirs
CONFIG += ordered

#
#	Get the defaults
#
include( QtDll-DblClick.pri )

#
#	The projects
#
SUBDIRS += QtDll-DblClick-dll
SUBDIRS += QtDll-DblClick-app
