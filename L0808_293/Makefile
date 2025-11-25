CXX=g++

l0808293o=L0808_293.o L0808_293test.o
L0808293.exe: $(l0808293o)
	$(CXX) -o L0808293.exe $(l0808293o)

L0808_293.o: L0808_293.cpp L0808_293.hpp
    $(CXX) -c L0808_293.cpp

L0808_293test.o: L0808_293test.cpp L0808_293.hpp
	$(CXX) -c L0808_293test.cpp

.PHONY: clean run
clean:
	rm -f $(l0808293o) L0808293.exe

run: L0808293.exe
	./L0808293.exe