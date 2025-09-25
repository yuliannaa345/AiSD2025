ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l201067o=L201_067.o L201_067test.o
L201067.exe: $(l201067o)
	$(CXX) -o L201067.exe $(l201067o)

L201_067.o: L201_067.cpp
	$(CXX) -c L201_067.cpp

L201_067test.o: L201_067test.cpp L201_067.hpp
	$(CXX) -c L201_067test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l201067o) m.exe L201067.exe
