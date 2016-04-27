#-------------------------------------------------
#
# Project created by QtCreator 2012-08-17T18:43:08
#
#-------------------------------------------------


QT       += core gui
QT       += sql
QT       += printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FirebirdToCPPClass
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    wizyta.cpp \
    choroba.cpp \
    recepta.cpp \
    pacjent.cpp

HEADERS  += mainwindow.h \
    ui_mainwindow.h \
    wizyta.h \
    choroba.h \
    recepta.h \
    pacjent.h

FORMS    += \
    mainwindow.ui \
    wizyta.ui \
    choroba.ui \
    recepta.ui \
    pacjent.ui

RESOURCES += \
    resources/resource.qrc
