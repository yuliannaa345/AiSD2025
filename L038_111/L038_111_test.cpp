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

int main(){
    Tree* root = new Tree{10, nullptr};
    root->left = new Tree{5, nullptr};
    root->right = new Tree{12, nullptr};
    root->left->left = new Tree{2, nullptr};
    root->left->left->left = new Tree{1, nullptr};
 
    Tree* minNode = find_minimum(root);

    if (minNode)
        cout << "Минимальный элемент: " << minNode->item << endl;
    else
        cout << "Дерево пустое." << endl;
}
    return 0;
}
