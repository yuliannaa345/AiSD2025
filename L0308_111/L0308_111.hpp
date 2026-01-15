#ifndef L038_111_H 
#define L038_111_H 

struct Tree {
    int value;
    Tree* left;
    Tree* right;
};

Tree* find_minimum(Tree* t);

#endif