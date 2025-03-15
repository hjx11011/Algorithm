//
// Created by jackson on 25-3-15.
//
#include "heap_sort.h"

namespace Sort {
template<typename T>
void HeapSort<T>::sort(std::vector<T> &vec, int end) {
    if (end == 0) {
        return;
    }
    int lastNonLeafNode = (end + 1) / 2 - 1;
    for (int i = lastNonLeafNode; i >= 0; i--) {
        if (i * 2 + 1 <= end && vec[i] < vec[i * 2 + 1]) {
            std::swap(vec[i], vec[i * 2 + 1]);
        }
        if (i * 2 + 2 <= end && vec[i] < vec[i * 2 + 2]) {
            std::swap(vec[i], vec[i * 2 + 2]);
        }
    }
    std::swap(vec[0], vec[end]);
    sort(vec, end - 1);
}

template<typename T>
void HeapSort<T>::sort(std::vector<T>& vec) {
    sort(vec, vec.size() - 1);
}
}

template class Sort::HeapSort<int>;



