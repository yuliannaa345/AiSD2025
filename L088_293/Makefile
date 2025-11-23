CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -O2
TARGET = test_L088_293
SOURCES = L088_293.cpp test_L088_293.cpp
OBJECTS = $(SOURCES:.cpp=.o)
HEADERS = L088_293.hpp

all: $(TARGET)

$(TARGET): $(OBJECTS)
    $(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.cpp $(HEADERS)
    $(CXX) $(CXXFLAGS) -c $< -o $@

test: $(TARGET)
    ./$(TARGET)

run: $(TARGET)
    ./$(TARGET)

clean:
    rm -f $(OBJECTS) $(TARGET)

rebuild: clean all

debug: CXXFLAGS += -g -DDEBUG
debug: clean $(TARGET)

memcheck: $(TARGET)
    valgrind --leak-check=full --show-leak-kinds=all ./$(TARGET)

.PHONY: all test run clean rebuild debug memcheck