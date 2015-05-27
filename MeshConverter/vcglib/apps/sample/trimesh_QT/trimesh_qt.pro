# Base options
TEMPLATE = app
LANGUAGE  = C++

# QT modules
QT += opengl

# Executable name
TARGET = trimesh_qt

# Directories
DESTDIR = .
UI_DIR = build/ui
MOC_DIR = build/moc
OBJECTS_DIR = build/obj

# Lib headers
INCLUDEPATH += .
INCLUDEPATH += ../../..

# Lib sources
SOURCES += ../../../wrap/ply/plylib.cpp
SOURCES += ../../../wrap/gui/trackball.cpp
SOURCES += ../../../wrap/gui/trackmode.cpp


# Compile glew
DEFINES += glew
#INCLUDEPATH += ../../../../code/lib/glew/include
#SOURCES += ../../../../code/lib/glew/src/glew.c

#
LIBS += -L/usr/lib64 -lGLEW -lglut -lGLU
# Awful problem with windows..
win32{
  DEFINES += NOMINMAX
}

# Input
HEADERS += mainwindow.h
HEADERS += glarea.h

SOURCES += main.cpp
SOURCES += mainwindow.cpp
SOURCES += glarea.cpp

FORMS += mainwindow.ui
CONFIG += c++11
