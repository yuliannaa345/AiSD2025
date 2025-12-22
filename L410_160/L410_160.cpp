#include "L410_160.hpp"
#include <queue>


void merge(std:vector<item_type>& s, int low, int middle, int high) {
    int i;                  /* counter */
    queue buffer1, buffer2; /* buffers to hold elements for merging */

    std::queue<item_type> buffer1;

    std::queue<item_type> buffer2;

    for (i = low; i <= middle; i++) {
        buffer1.push(s[i]);
    }

    for (i = middle + 1; i <= high; i++) {
        buffer2.push(s[i]);
    }

    i = low;
    while (!(empty_queue(&buffer1) || empty_queue(&buffer2))) {
        if (headq(&buffer1) <= headq(&buffer2)) {
            s[i++] = buffer1.pop();
        } else {
            s[i++] = buffer2.pop();
        }
    }

    while (!buffer1.empty()) {
        s[i++] = buffer1.pop();
    }

    while (!buffer2.empty()) {
        s[i++] = buffer2.pop();    
    }
}

// Реализация сортировки слиянием
void merge_sort(std::vector<item_type>& s, int low, int high) {
    if (low < high) {
        int middle = (low + high) / 2;

        merge_sort(s, low, middle);
        merge_sort(s, middle + 1, high);

        merge(s, low, middle, high);
    }
}
