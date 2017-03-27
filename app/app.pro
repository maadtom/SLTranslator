include(../defaults.pri)

QT += widgets
TEMPLATE = app

SOURCES += main.cpp \
    sltmenu.cpp

LIBS += -L../src -lSLTranslator

FORMS += \
    sltmenu.ui

HEADERS += \
    sltmenu.h
