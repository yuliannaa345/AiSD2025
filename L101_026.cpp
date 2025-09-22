#include <iostream>

using namespace std;

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
int main() {
    setlocale(LC_ALL, "RU");
    int mas[] = { 1, 2, 4, 89,-1, -12391030 };
    int n = sizeof(mas) / sizeof(mas[0]);
    insertion_sort(mas, n);
    int i;

    for (i = 0; i < n; i++) {
        cout << mas[i] << " ";
    }
    return 0;
}


