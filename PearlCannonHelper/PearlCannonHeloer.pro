QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PearlCannonHelper
TEMPLATE = app

SOURCES += \
    main.cpp \
    PearlCannonHelper.cpp

HEADERS += \
    PearlCannonHelper.h

FORMS += \
    PearlCannonHelper.ui

# 添加翻译文件
TRANSLATIONS = PearlCannonHelper_zh.ts
