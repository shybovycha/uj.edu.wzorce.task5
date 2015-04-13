#-------------------------------------------------
#
# Project created by QtCreator 2015-04-12T16:30:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = command_pattern
TEMPLATE = app


SOURCES += main.cpp \
    mainwindow.cpp \
    command.cpp \
    inserttextcommand.cpp \
    removetextcommand.cpp \
    texteditcommand.cpp \
    mytextedit.cpp

HEADERS  += \
    mainwindow.h \
    command.h \
    inserttextcommand.h \
    removetextcommand.h \
    texteditcommand.h \
    mytextedit.h

FORMS    += \
    mainwindow.ui
