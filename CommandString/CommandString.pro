QT += core
QT -= gui

CONFIG += c++11

TARGET = CommandString
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    icommand.cpp \
    appendcommand.cpp \
    uppercasecommand.cpp \
    lowercasecommand.cpp \
    stackcommand.cpp

HEADERS += \
    icommand.h \
    appendcommand.h \
    uppercasecommand.h \
    lowercasecommand.h \
    stackcommand.h
