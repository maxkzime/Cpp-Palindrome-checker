TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        functions.cpp \
        main.cpp

DISTFILES += \
    .gitattributes \
    .gitignore \
    README.md

HEADERS += \
    functions.h \
    typeDef.h
