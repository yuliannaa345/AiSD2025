//L201_067
//Сортировка методом выбора
//ПМ-2025, Чистяков Андрей
#include <iostream>
void selection_sort(int s[], int n) {
    int i, j;//счетчики
    int min; //наименьший элемент
    for (i = 0; i < n; i++) {
        int min = i;
        for (j = i + 1; j < n; j++) {
            if (s[min] > s[j])
                min = j;
        }
        int temp = s[min];
        s[min] = s[i];
        s[i] = temp;
    }
}