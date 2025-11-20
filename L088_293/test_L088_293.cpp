#include "L088_293.hpp"
#include <cassert>
#include <iostream>

// Тест 1: Базовая инициализация
void test_initialization() {
    std::cout << "Тест 1: Инициализация... ";
    UnionFind uf(5);

    // Проверяем, что каждый элемент является своим собственным корнем
    for (int i = 1; i <= 5; i++) {
        assert(uf.find(i) == i);
        assert(uf.getSize(i) == 1);
    }

    std::cout << "ПРОЙДЕН\n";
}

// Тест 2: Объединение двух элементов
void test_simple_union() {
    std::cout << "Тест 2: Простое объединение... ";
    UnionFind uf(5);

    uf.unionSets(1, 2);

    // Теперь 1 и 2 должны быть в одном множестве
    assert(uf.sameComponent(1, 2));
    assert(!uf.sameComponent(1, 3));

    // Размер множества должен быть 2
    assert(uf.getSize(1) == 2);
    assert(uf.getSize(2) == 2);

    std::cout << "ПРОЙДЕН\n";
}

// Тест 3: Множественные объединения
void test_multiple_unions() {
    std::cout << "Тест 3: Множественные объединения... ";
    UnionFind uf(10);

    uf.unionSets(1, 2);
    uf.unionSets(2, 3);
    uf.unionSets(4, 5);

    // 1, 2, 3 должны быть в одном множестве
    assert(uf.sameComponent(1, 2));
    assert(uf.sameComponent(2, 3));
    assert(uf.sameComponent(1, 3));

    // 4, 5 должны быть в одном множестве
    assert(uf.sameComponent(4, 5));

    // 1 и 4 не должны быть в одном множестве
    assert(!uf.sameComponent(1, 4));

    // Размеры
    assert(uf.getSize(1) == 3);
    assert(uf.getSize(4) == 2);

    std::cout << "ПРОЙДЕН\n";
}

// Тест 4: Объединение больших множеств
void test_large_union() {
    std::cout << "Тест 4: Объединение больших множеств... ";
    UnionFind uf(10);

    // Создаем множество {1, 2, 3}
    uf.unionSets(1, 2);
    uf.unionSets(2, 3);

    // Создаем множество {4, 5, 6}
    uf.unionSets(4, 5);
    uf.unionSets(5, 6);

    // Объединяем два множества
    uf.unionSets(3, 4);

    // Теперь все элементы 1-6 должны быть в одном множестве
    assert(uf.sameComponent(1, 6));
    assert(uf.getSize(1) == 6);

    std::cout << "ПРОЙДЕН\n";
}

// Тест 5: Повторное объединение одних и тех же элементов
void test_redundant_union() {
    std::cout << "Тест 5: Повторное объединение... ";
    UnionFind uf(5);

    uf.unionSets(1, 2);
    int size_before = uf.getSize(1);

    // Повторное объединение не должно изменить размер
    uf.unionSets(1, 2);
    assert(uf.getSize(1) == size_before);

    std::cout << "ПРОЙДЕН\n";
}

// Тест 6: Цепочка объединений
void test_chain_union() {
    std::cout << "Тест 6: Цепочка объединений... ";
    UnionFind uf(6);

    // Создаем цепочку: 1-2-3-4-5-6
    for (int i = 1; i < 6; i++) {
        uf.unionSets(i, i + 1);
    }

    // Все элементы должны быть в одном множестве
    for (int i = 1; i <= 6; i++) {
        for (int j = i + 1; j <= 6; j++) {
            assert(uf.sameComponent(i, j));
        }
    }

    assert(uf.getSize(1) == 6);

    std::cout << "ПРОЙДЕН\n";
}

// Тест 7: Работа с большим количеством элементов
void test_large_scale() {
    std::cout << "Тест 7: Большой масштаб... ";
    UnionFind uf(1000);

    // Объединяем четные числа
    for (int i = 2; i < 1000; i += 2) {
        uf.unionSets(2, i);
    }

    // Объединяем нечетные числа
    for (int i = 3; i < 1000; i += 2) {
        uf.unionSets(1, i);
    }

    // Проверяем четные
    assert(uf.sameComponent(2, 100));
    assert(uf.sameComponent(4, 998));

    // Проверяем нечетные
    assert(uf.sameComponent(1, 99));
    assert(uf.sameComponent(3, 999));

    // Четные и нечетные не должны быть в одном множестве
    assert(!uf.sameComponent(1, 2));

    std::cout << "ПРОЙДЕН\n";
}

// Тест 8: Проверка getN
void test_get_n() {
    std::cout << "Тест 8: Метод getN... ";

    UnionFind uf1(10);
    assert(uf1.getN() == 10);

    UnionFind uf2(100);
    assert(uf2.getN() == 100);

    std::cout << "ПРОЙДЕН\n";
}

int main() {
    std::cout << "=== Запуск тестов UnionFind ===\n\n";

    test_initialization();
    test_simple_union();
    test_multiple_unions();
    test_large_union();
    test_redundant_union();
    test_chain_union();
    test_large_scale();
    test_get_n();

    std::cout << "\n=== Все тесты пройдены успешно! ===\n";

    return 0;
}
