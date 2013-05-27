#-------------------------------------------------
#
# Project created by QtCreator 2013-05-26T23:49:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Pairs
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    newgamedialog.cpp \
    helpdialog.cpp \
    gamemodel.cpp \
    card.cpp

HEADERS  += mainwindow.h \
    newgamedialog.h \
    helpdialog.h \
    gamemodel.h \
    card.h

FORMS    += mainwindow.ui \
    newgamedialog.ui \
    helpdialog.ui
