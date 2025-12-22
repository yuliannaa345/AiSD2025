CXX=g++

l410160o=L0410_160.o L0410_160test.o
L0410_160.exe: $(l410160o)
	$(CXX) -o L0410_160.exe $(l410160o)

L0410_160.o: L0410_160.cpp L0410_160.hpp
	$(CXX) -c L0410_160.cpp

L0410_160test.o: L0410_160test.cpp L0410_160.hpp
	$(CXX) -c L0410_160test.cpp

.PHONY: clean
clean:
	rm -f $(l410160o) L0410_160.exe