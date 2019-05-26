CXX = g++
CXXFLAGS	= -std=c++11 -Wall

all: ElectoralMap

clean:
	rm ElectoralMap ElectoralMap.o

ElectoralMap: main.cpp ElectoralMap.o
	$(CXX) $(CXXFLAGS) main.cpp ElectoralMap.o -o ElectoralMap

ElectoralMap.o: ElectoralMap.cpp
	$(CXX) $(CXXFLAGS) -c ElectoralMap.cpp

