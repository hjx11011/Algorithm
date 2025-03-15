#include "sort/heap_sort.h"
#include "sort/quick_sort.h"
#include "sort/test.h"

template<typename T>
void printString(T head) {
    std::cout << head << " ";
}

template<typename T, typename... Args>
void printString(T head, Args... args) {
    std::cout << head << " ";
    printString(args...);
}

template<typename T, typename... Args>
void print(vector<T> arr, Args... args) {
    printString(args...);
    for (const auto& item : arr) {
        cout << item << " ";
    }

    std::cout << std::endl;
}


int main() {
    vector<int> arr {1,4,3,6,5,3,1,2,10,9};

    // QuickSort<int> sorter;
    // sorter.sort(arr);

    Sort::HeapSort<int> sorter;
    sorter.sort(arr);
    //
    print(arr, "[INFO]: ");
}

