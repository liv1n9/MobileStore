#-------------------------------------------------
#
# Project created by QtCreator 2018-05-20T20:38:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MobileStore
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
    accountsdataset.cpp \
    administrator.cpp \
    comment.cpp \
    commentsdataset.cpp \
    fileutils.cpp \
    main.cpp \
    mainwindowcontroller.cpp \
    numberutils.cpp \
    person.cpp \
    product.cpp \
    productsdataset.cpp \
    productwidget.cpp \
    user.cpp \
    productstab.cpp \
    compareutils.cpp \
    algoutils.cpp \
    productstable.cpp \
    productstablesize.cpp

HEADERS += \
    accountsdataset.h \
    administrator.h \
    comment.h \
    commentsdataset.h \
    dataset.h \
    fileutils.h \
    mainwindowcontroller.h \
    numberutils.h \
    person.h \
    product.h \
    productsdataset.h \
    productwidget.h \
    user.h \
    productstab.h \
    compareutils.h \
    algoutils.h \
    productstable.h \
    productstablesize.h

FORMS += \
    mainwindowcontroller.ui \
    productwidget.ui

SUBDIRS += \
    MobileStore.pro

DISTFILES += \
    MobileStore.pro.user
