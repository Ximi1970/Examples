TEMPLATE = subdirs
CONFIG += ordered

#
#	Get the defaults
#
include( MouseHook.pri )

#
#	The projects
#
SUBDIRS += MouseHook-dll
SUBDIRS += MouseHook-app
