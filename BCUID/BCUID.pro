#-------------------------------------------------
#
# Project created by QtCreator 2022-08-01T16:08:28
#
#-------------------------------------------------

QT       += core gui sql

QT       += network

QT += widgets


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport


TARGET = BCUID
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

CONFIG += c++11
CONFIG   += extserialport

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    wifi-setup.cpp \
    twopoint.cpp \
    testconfig.cpp \
    test.cpp \
    qcustomplot.cpp \
    qc.cpp \
    printer.cpp \
    pi2c.cpp \
    kinetic.cpp \
    keyboard.cpp \
    endpoint.cpp

HEADERS += \
        mainwindow.h \
    qcustomplot.h \
    printer.h \
    pi2c.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \
    BCUID.pro


INCLUDEPATH    += /usr/local/include
LIBS += -L/usr/local/lib -lwiringPi -liir

RESOURCES += \
    icons.qrc

