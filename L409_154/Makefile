l409154o=L409_154.o L409_154test.o
L409_154.exe: $(l409154o)
	$(CXX) -o L409_154.exe $(l409154o)

L409_154.o: L409_154.cpp
	$(CXX) -c L409_154.cpp

L409_154test.o: L409_154test.cpp L409_154.hpp
	$(CXX) -c L409_154test.cpp

.PHONY: clean run all
clean:
	$(RM) $(objects) $(l409154o) L409_154.exe
run:
	L409_154.exe
all: L409_154.exe run clean
