# Makefile for Writing Make Files Example
# https://www.softwaretestinghelp.com/cpp-makefile-tutorial/ 
# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -Wall -g
 
# ****************************************************
# Targets needed to bring the executable up to date
 
#main: main.o Point.o Square.o
#    $(CC) $(CFLAGS) -o main main.o Point.o Square.o

all: 2.main.o 4.Numberofoccurrence.o
	$(CC) $(CFLAGS) -o main 2.main.o
	$(CC) $(CFLAGS) -o Numberofoccurrence 4.Numberofoccurrence.o

#Numberofoccurrence: 4.Numberofoccurrence.o
 
# The main.o target can be written more simply
 
#main.o: main.cpp Point.h Square.h
#    $(CC) $(CFLAGS) -c main.cpp

2.main.o: 2.main.cpp
	$(CC) $(CFLAGS) -c 2.main.cpp

4.Numberofoccurrence.o: 4.Numberofoccurrence.cpp
	$(CC) $(CFLAGS) -c 4.Numberofoccurrence.cpp
 
#Point.o: Point.h
 
#Square.o: Square.h Point.h

clean:
	rm main Numberofoccurrence 2.main.o 4.Numberofoccurrence.o
