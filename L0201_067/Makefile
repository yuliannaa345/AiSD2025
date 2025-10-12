CXX = g++
CXXFLAGS = -std=c++11

l0201067o = L0201_067test.o
L0201067.exe: $(l0201067o)
	$(CXX) -o L0201067.exe $(l0201067o)

L0201_067test.o: L0201_067test.cpp L0201_067.hpp
	$(CXX) $(CXXFLAGS) -c L0201_067test.cpp

.PHONY: clean
clean:
	rm -f L0201_067test.o L0201067.exe