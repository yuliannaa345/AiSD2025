CXX = g++
CXXFLAGS = -std=c++11

l0101026o = L0101_026test.o
L0101026.exe: $(l0101026o)
	$(CXX) -o L0101026.exe $(l0101026o)

L0101_026test.o: L0101_026test.cpp L0101_026.hpp
	$(CXX) $(CXXFLAGS) -c L0101_026test.cpp

.PHONY: clean
clean:
	rm -f L0101_026test.o L0101026.exe