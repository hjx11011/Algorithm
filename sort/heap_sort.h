//
// Created by jackson on 25-3-15.
//

#ifndef HEAP_SORT_H
#define HEAP_SORT_H
#include <iostream>
#include <vector>

namespace Sort {

template <typename T>
class HeapSort {
public:
    void sort(std::vector<T> &vec);
    void sort(std::vector<T>& vec, int end);
};
}


#endif //HEAP_SORT_H
