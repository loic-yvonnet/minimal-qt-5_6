QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = minimal_qt_5_6
TEMPLATE = app


SOURCES += main.cpp\
        minimal_window.cpp

HEADERS  += minimal_window.h

FORMS    += minimal_window.ui
