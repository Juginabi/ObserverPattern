TEMPLATE = app
CONFIG += console
CONFIG -= qt
QMAKE_CFLAGS_DEBUG += -pg
QMAKE_CXXFLAGS_DEBUG += -pg
QMAKE_LFLAGS_DEBUG += -pg
QMAKE_CFLAGS_RELEASE += -O3
QMAKE_CXXFLAGS_RELEASE += -O3

SOURCES += src/main.cpp \
    src/iobserver.cpp \
    src/entity.cpp \
    src/attacker.cpp \
    src/defender.cpp \
    src/Participant.cpp

HEADERS += \
    include/iobserver.h \
    include/entity.h \
    include/attacker.h \
    include/defender.h \
    include/participant.h

