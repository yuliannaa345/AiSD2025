l410160o=L410_160.o L410_160test.o
L410_160.exe: $(l410160o)
	$(CXX) -o L410_160.exe $(l410160o)

L410_160.o: L410_160.cpp
	$(CXX) -c L410_160.cp11p

L410_160test.o: L410_160test.cpp L410_160.hpp
	$(CXX) -c L410_160test.cpp

.PHONY: clean run all
clean:
	$(RM) $(objects) $(l410160o) L410_160.exe
run:
	L410_160.exe
all: L410_160.exe run clean
