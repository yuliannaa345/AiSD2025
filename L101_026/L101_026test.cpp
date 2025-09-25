//Тесты для листинга 1.1, Чистяков Андрей, ПМ-201
#include <iostream>
#include "L101_026.hpp"
using namespace std;
int main() {
    int mas[] = { 1, 2, 4, 89,-1, -12391030 };
    int n = sizeof(mas) / sizeof(mas[0]);
    insertion_sort(mas, n);
    int i;

    for (i = 0; i < n; i++) {
        cout << mas[i] << " ";
    }
    return 0;
}