#include <iostream>
#include <sstream>
#include <string>
#include "L038_111.hpp"
using namespace std;

// Структура узла дерева
struct Tree {
    int item;
    Tree* left;
    Tree* right;
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
// Функция вставки в бинарное дерево поиска
Tree* insert(Tree* root, int value) {
    if (root == nullptr) {
        Tree* node = new Tree{value, nullptr, nullptr};
        return node;
    }
    if (value < root->item)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);
    return root;
}

int main() {
    Tree* root = nullptr;
    string line;

    cout << "Введите элементы дерева:\n";
    getline(cin, line);
    stringstream ss(line);
    int value;
    while (ss >> value) {
        root = insert(root, value);
    }

    Tree* minNode = find_minimum(root);

    if (minNode)
        cout << "Минимальный элемент: " << minNode->item << endl;
    else
        cout << "Дерево пустое." << endl;

    return 0;
}