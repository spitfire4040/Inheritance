CC=g++
CXXFLAGS= -g -Wall -std=c++0x

all:		Run

Run:		main.o Animal.o
			$(CC) $(CXXFLAGS) -o Run main.o Animal.o

main.o:		main.cpp
			$(CC) $(CXXFLAGS) -c main.cpp

Animal.o:	Animal.cpp Animal.h
			$(CC) $(CXXFLAGS) -c Animal.cpp

clean:		
			\rm *.o Run
