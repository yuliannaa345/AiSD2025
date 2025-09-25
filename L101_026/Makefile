ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l101026o=L101_026.o L101_026test.o
L101026.exe: $(l101026o)
	$(CXX) -o L101026.exe $(l101026o)

L101_026.o: L101_026.cpp
	$(CXX) -c L101_026.cpp

L101_026test.o: L101_026test.cpp L101_026.hpp
	$(CXX) -c L101_026test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l101026o) m.exe L101026.exe

