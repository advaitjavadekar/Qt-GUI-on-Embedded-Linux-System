#-------------------------------------------------
#
# Project created by QtCreator 2016-03-22T13:14:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BBB2
TEMPLATE = app


SOURCES += main.cpp\
        inputs.cpp \
    symptoms.cpp \
    send.cpp \
    basic.cpp

HEADERS  += inputs.h \
    symptoms.h \
    send.h \
    basic.h

FORMS    += inputs.ui \
    symptoms.ui \
    send.ui \
    basic.ui
