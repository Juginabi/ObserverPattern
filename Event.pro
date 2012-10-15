TEMPLATE = app
CONFIG += console
CONFIG -= qt
QMAKE_CXXFLAGS_DEBUG += -pg
QMAKE_LFLAGS_DEBUG += -pg


SOURCES += src/main.cpp \
    src/observableentity.cpp \
    src/iobserver.cpp \
    src/entity.cpp \
    src/attacker.cpp \
    src/defender.cpp

HEADERS += \
    include/observableentity.h \
    include/iobserver.h \
    include/entity.h \
    include/attacker.h \
    include/defender.h

