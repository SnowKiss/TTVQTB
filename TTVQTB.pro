#-------------------------------------------------
#
# Project created by QtCreator 2018-02-07T21:21:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TTVQTB
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        sceneviewer.cpp \
    scenario.cpp \
    scene.cpp \
    panneau.cpp \
    minijeu.cpp \
    drinkgame.cpp \
    keygame.cpp \
    walkgame.cpp \
    inputmanager.cpp \
    profilsouris.cpp \
    dessinateur.cpp \
    profilclassic.cpp \
    scenetype.cpp

HEADERS += \
        sceneviewer.h \
    scenario.h \
    scene.h \
    panneau.h \
    minijeu.h \
    drinkgame.h \
    keygame.h \
    walkgame.h \
    inputmanager.h \
    profilsouris.h \
    dessinateur.h \
    profilclassic.h \
    scenetype.h

FORMS += \
        sceneviewer.ui
