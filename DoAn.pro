QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adduser.cpp \
    changepw.cpp \
    dsdon.cpp \
    khohang.cpp \
    kiemtrathongtin.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    nhapkho.cpp \
    quanlyuser.cpp \
    taodonhang.cpp \
    thaydoiquyen.cpp \
    thongtindon.cpp

HEADERS += \
    adduser.h \
    changepw.h \
    dsdon.h \
    khohang.h \
    kiemtrathongtin.h \
    login.h \
    mainwindow.h \
    nhapkho.h \
    quanlyuser.h \
    taodonhang.h \
    thaydoiquyen.h \
    thongtindon.h

FORMS += \
    adduser.ui \
    changepw.ui \
    dsdon.ui \
    khohang.ui \
    kiemtrathongtin.ui \
    login.ui \
    mainwindow.ui \
    nhapkho.ui \
    quanlyuser.ui \
    taodonhang.ui \
    thaydoiquyen.ui \
    thongtindon.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Data/background/background.png

RESOURCES += \
    res.qrc
