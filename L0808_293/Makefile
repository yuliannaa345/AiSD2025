CXX=g++

ifeq ($(OS),Windows_NT)
	RM=rm
	EXT=.exe
else
	RM=rm
	EXT=

endif


L0808_293o=L0808_293.o test_L0808_293.o

L0702_242.exe: $(L0808_293o)
	$(CXX) -o L0808_293.exe $(L0808_293o)

L0702_242.o: L0808_293.cpp
	$(CXX) $(CXXFLAGS) -c L0808_293.cpp

L0702_242_test.o: test_L0808_293.cpp L0808_293.hpp
	$(CXX) $(CXXFLAGS) -c test_L0808_293.cpp

.PHONY: clean run all
clean:
	$(RM) -f $(L0808_293o) L0808_293.exe
run:
	L0808_293.exe
all: L0808_293.exe run clean
