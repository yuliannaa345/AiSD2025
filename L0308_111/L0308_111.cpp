#include <iostream>
#include "L038_111.hpp"

struct Tree {
    int item;
    Tree* left;
};

Tree* find_minimum(Tree* t) {
    if (t == nullptr) { //Проверяем, что элемент не пуст
        return nullptr;
    }
    Tree* min = t;
    while (min->left != nullptr) { //Обходим левое поддерево
        min = min->left;
    }
    return min;
}