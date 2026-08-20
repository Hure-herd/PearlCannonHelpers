QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PearlCannonHelper
TEMPLATE = app

SOURCES += \
    main.cpp \
    PearlCannonHelper.cpp \
    Pearl.cpp \
    Setting.cpp \
    StringHelper.cpp \
    Constant.cpp \
    vec3d.cpp

HEADERS += \
    PearlCannonHelper.h \
    Pearl.h \
    Setting.h \
    StringHelper.h \
    Constant.h \
    vec3d.h

FORMS += \
    PearlCannonHelper.ui

RESOURCES += \
    PearlCannonHelper.qrc

RC_FILE += \
    PearlCannonHelper.rc

# 添加翻译文件
TRANSLATIONS = PearlCannonHelper_zh.ts
