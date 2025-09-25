//Тесты для листинга 2.1, Чистяков Андрей, ПМ-201
#include <iostream>
#include "L201_067.hpp"

using namespace std;
int main() {
    int arr[] = { 0, 0, -1, 6, 3, 4, 99 , 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, n);
    int i;
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}