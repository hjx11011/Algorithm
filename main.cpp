#include "sort/quick_sort.h"

void enterSpace() {
    std::cout << std::endl;
    std::cout << std::endl;
}

int main() {
    enterSpace();

    vector<int> arr {1,4,3,6,5,3,1,2,10,9};

    QuickSort<int> sorter;
    sorter.sort(arr);

    for (auto i : arr) {
        std::cout << i << " ";
    }
}

