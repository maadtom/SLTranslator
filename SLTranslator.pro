#-------------------------------------------------
#
# Project created by QtCreator 2017-03-27T21:48:20
#
#-------------------------------------------------
QT += widgets
TARGET = SLTranslator
TEMPLATE = subdirs
CONFIG+=ordered
SUBDIRS = \
    src \
    app \
    test

app.depends = src
test.depends = src

OTHER_FILES += \
defaults.pri
