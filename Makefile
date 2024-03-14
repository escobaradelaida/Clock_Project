#compiler
CC = g++

CFLAGS = -std=c++11 -Wall -Werror

#executable i want
TARGET = clock_app

SOURCES = main.cpp Clock.cpp

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)