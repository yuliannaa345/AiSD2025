#include <iostream>
#include "L1017_378.hpp"
using namespace std;

const int NIL = -1;
int parent[3][5];

void report_subset(int n, int k) {
     if (k == 0) 
     return;
     
     if (parent[n][k] == NIL) {
         report_subset(n - 1, k);
        } 
    else { 
        report_subset(n - 1, parent[n][k]);
        cout << " " << (k - parent[n][k]) << " ";
    } 
}

int main() {
    int n = 3;
    int k = 5;

    // Инициализация массива parent
    for (int i = 0; i <= n; ++i)
        for (int j = 0; j <= k; ++j)
            parent[i][j] = NIL;

    // Пример заполнения parent для множества {2,3}
 parent[1][2] = 0;
 parent[2][5] = 2;

    cout << "Подмножества:";
    report_subset(n, k);
    cout << endl;

    return 0;
}