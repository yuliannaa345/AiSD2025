CXX = g++

l1017378o = L1017_378.o L1017_378_test.

L1017_378.exe: $(l1017378o)
	$(CXX) -o L1017_378.exe $(l1017378o)

L1017_378.o: L1017_378.cpp L1017_378.hpp
	$(CXX) -c L1017_378.cpp

L1017_378_test.o: L1017_378_test.cpp L1017_378.hpp
	$(CXX) -c L1017_378_test.cpp

.PHONY: clean run all

clean:
	$(RM) $(l1017378o) L1017_378.exe

run:
	L1017_378.exe

all: L1017_378.exe run clean
