#ifndef L410_160_HPP
#define L410_160_HPP

#include <vector>
using item_type = int;

void merge_sort(std::vector<item_type>& s, int low, int high);

void merge(std::vector<item_type>& s, int low, int middle, int high);

#endif
