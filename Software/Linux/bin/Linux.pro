QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = bin/Car_Rental
TEMPLATE = app

SOURCES = ../index.cpp\
          ../Components/ConnectionPage.cpp

HEADERS = ../Components/headers/ConnectionPage.h