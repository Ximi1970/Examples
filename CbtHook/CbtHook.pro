TEMPLATE = subdirs
CONFIG += ordered

#
#	Get the defaults
#
include( CbtHook.pri )

#
#	The projects
#
SUBDIRS += CbtHook-dll
SUBDIRS += CbtHook-app
