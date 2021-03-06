QT       += core gui

QMAKE_CXXFLAGS += -std=c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TicTacToe
TEMPLATE = app

SOURCES += \
    TicTacToeWidget.cpp \
    main.cpp \
    MainWindow.cpp

HEADERS  += \
    TicTacToeWidget.h \
    MainWindow.h

FORMS    += \
    TicTacToeWidget.ui \
    MainWindow.ui
