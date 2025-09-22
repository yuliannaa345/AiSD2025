# L023_068 - search string in text
# PM-2025 Parfyonov Vyacheslav

# C++ compiler
CXX = g++

# Build L023_068
L023_068:
	$(CXX) -o L023_068.exe L023_068.cpp L023_068test.cpp
	@echo "=== L023_068 built successfully! ==="

# Run program
run: L023_068
	./L023_068.exe

# Clean
clean:
	rm -f L023_068.exe
	@echo "=== L023_068.exe deleted ==="

# Help
help:
	@echo "=== Commands for L023_068 ==="
	@echo "make L023_068  - build program"
	@echo "make run       - build and run"
	@echo "make clean     - delete exe-file"
	@echo "make help      - show this help"

# Default target
all: L023_068