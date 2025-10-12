CXX = g++
CXXFLAGS = -std=c++11

l101026o = L101_026test.o
L101026.exe: $(l101026o)
	$(CXX) -o L101026.exe $(l101026o)

L101_026test.o: L101_026test.cpp L101_026.hpp
	$(CXX) $(CXXFLAGS) -c L101_026test.cpp

.PHONY: clean
clean:
	rm -f L101_026test.o L101026.exe