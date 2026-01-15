CXX = g++
CXXFLAGS = -std=c++11

l0308111o = L0308_111.o

L0308_111.exe: $(l0308111o)
	$(CXX) -o L0308_111.exe $(l0308111o)

L0308_111.o: L0308_111.cpp L0308_111.hpp
	$(CXX) $(CXXFLAGS) -c L0308_111.cpp

run: L0308_111.exe
	./L0308_111.exe

clean:
	del L0308_111.o L0308_111.exe 2>nul 2>nul

all: run clean

.PHONY: all run clean
