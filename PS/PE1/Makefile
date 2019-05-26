#makefile for compiling the point class

#Author: Chakrya Ros

CXX = g++ # the compiler

CXXFLAGS = -std=c++11 -ggdb -Wall # flags for the compiler (user c++11 standard, include gdb debug info)

#runs for "make all"
all: main

#create the object file for Point.cpp

Point.o: Point.h Point.cpp
	$(CXX) $(CXXFLAGS) -c Point.cpp

#create the object file for main file

main.o: Point.h main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

#create the executable

main: main.o Point.o
	$(CXX) $(CXXFLAGS) -o main main.o Point.o

#rule for "make clear"
clean: 
	rm *.o main