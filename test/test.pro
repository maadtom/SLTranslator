include(../defaults.pri)
TEMPLATE = app

CONFIG   += console
CONFIG   -= app_bundle
CONFIG   += c++14
CONFIG   -= qt

SOURCES += \
    TestImageHandler.cpp

LIBS += -lunittest++ -L../src -lSLTranslator
