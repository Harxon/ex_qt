#-------------------------------------------------
#
# Project created by QtCreator 2017-03-13T20:50:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ex3_13_menu
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    warningdialog.cpp

HEADERS  += mainwindow.h \
    warningdialog.h

FORMS    += mainwindow.ui \
    warningdialog.ui

DISTFILES += \
    qtEditIcon/copy.png \
    qtEditIcon/cut.png \
    qtEditIcon/save.png \
    qtEditIcon/text.png \
    thisApp.rc

RESOURCES += \
    res.qrc

RC_FILE = thisApp.rc
