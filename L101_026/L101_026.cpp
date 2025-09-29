//L101_026
//Сортировка вставками
//ПМ-2025, Чистяков Андрей
#include <iostream>
#include "L101_026.hpp"
void insertion_sort(int s[], int n)
{
    int i, j;
    for (i = 1; i < n; i++) {
        j = i;
        while ((j > 0) && (s[j] < s[j - 1])) {
            // Обмен значениями
            int temp = s[j];
            s[j] = s[j - 1];
            s[j - 1] = temp;
            j--;  
        }
    }

}