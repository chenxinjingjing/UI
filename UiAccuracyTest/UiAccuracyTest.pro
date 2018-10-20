#-------------------------------------------------
#
# Project created by QtCreator 2018-10-15T14:34:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UiAccuracyTest
TEMPLATE = app


SOURCES += main.cpp\
        AccuracyTestDialog.cpp \
    NoVechPhotoCollection.cpp \
    GpsDialog.cpp \
    CameraParamDialog.cpp \
    ContinuousShotDialog.cpp

HEADERS  += AccuracyTestDialog.h \
    NoVechPhotoCollection.h \
    GpsDialog.h \
    CameraParamDialog.h \
    ContinuousShotDialog.h

FORMS    += AccuracyTestDialog.ui \
    NoVechPhotoCollection.ui \
    GpsDialog.ui \
    CameraParamDialog.ui \
    ContinuousShotDialog.ui

DISTFILES +=

RESOURCES += \
    showpics.qrc
