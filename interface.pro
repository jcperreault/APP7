TEMPLATE     = vcapp
TARGET       = interface
CONFIG      += warn_on qt debug_and_release windows console
HEADERS += interface.h mario.h
SOURCES     += main.cpp interface.cpp mario.cpp
INCLUDEPATH += .
QT += widgets