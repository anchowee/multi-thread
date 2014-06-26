#-------------------------------------------------
#
# Project created by QtCreator 2014-02-07T14:11:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = multithread
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    thread.cpp

HEADERS  += mainwindow.h \
    thread.h

FORMS    += mainwindow.ui
