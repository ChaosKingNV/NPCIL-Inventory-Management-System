QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cadd.cpp \
    cfind.cpp \
    consumables.cpp \
    cremove.cpp \
    creport.cpp \
    cupdate.cpp \
    main.cpp \
    mainwindow.cpp \
    miscellaneous.cpp \
    tools.cpp

HEADERS += \
    cadd.h \
    cfind.h \
    consumables.h \
    cremove.h \
    creport.h \
    cupdate.h \
    mainwindow.h \
    miscellaneous.h \
    tools.h

FORMS += \
    cadd.ui \
    cfind.ui \
    consumables.ui \
    cremove.ui \
    creport.ui \
    cupdate.ui \
    mainwindow.ui \
    miscellaneous.ui \
    tools.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
