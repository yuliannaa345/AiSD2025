CXX = g++
CXXFLAGS = -std=c++11

l1017378o = L1017_378.o L1017_378_test.

L1017_378.exe: $(l1017378o)
	$(CXX) -o L1017_378.exe $(l1017378o)

L1017_378.o: L1017_378.cpp L1017_378.hpp
	$(CXX) -c L1017_378.cpp

clean:
	del L1017_378.o L1017_378.exe 2>nul 2>nul

run: L1017_378.exe
	./L1017_378.exe

all: run clean

.PHONY: all run clean
