# Makefile для проекта UnionFind

CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -O2
TARGET = test_unionfind
SOURCES = L088_293.cpp test_L088_293.cpp
OBJECTS = $(SOURCES:.cpp=.o)
HEADERS = L088_293.hpp

# Основная цель - собрать и запустить тесты
all: $(TARGET)

# Сборка исполняемого файла
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Компиляция объектных файлов
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Запуск тестов
test: $(TARGET)
	./$(TARGET)

# Очистка скомпилированных файлов
clean:
	rm -f $(OBJECTS) $(TARGET)

# Пересборка проекта
rebuild: clean all

# Запуск с отладочной информацией
debug: CXXFLAGS += -g -DDEBUG
debug: clean $(TARGET)

# Проверка на утечки памяти (требует valgrind)
memcheck: $(TARGET)
	valgrind --leak-check=full --show-leak-kinds=all ./$(TARGET)

.PHONY: all test clean rebuild debug memcheck