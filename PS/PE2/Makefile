
CXX = g++  # the compiler
CXXFLAGS = -std=c++11 -Wall  # flags for the compiler (use c++11 standards, turn on all optional warnings)
GDBINFO = -ggdb # include this to generate info needed to run gdb

all: usepoint

clean:
	rm Point.o usepoint

usepoint: Point.o
	$(CXX) $(CXXFLAGS) main.cpp Point.o -o usepoint

Point.o: Point.cpp
	$(CXX) $(CXXFLAGS) -c Point.cpp

