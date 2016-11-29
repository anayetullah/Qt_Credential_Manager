#-------------------------------------------------
#
# Project created by QtCreator 2016-11-26T23:29:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Qt_Credential_Manager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    backwindow.cpp \
    user.cpp \
    accounts.cpp

HEADERS  += mainwindow.h \
    backwindow.h \
    user.h \
    accounts.h

FORMS    += mainwindow.ui \
    backwindow.ui
