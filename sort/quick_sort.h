#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class QuickSort {
public:
    QuickSort() = default;
    void sort(vector<T>& vec)
    {
        sort(vec, 0, vec.size() - 1);
    }

private:
    void sort(vector<T>& vec, int leftPtr, int rightPtr)
    {
        if (leftPtr >= rightPtr) {
            return;
        }
        T key = vec[leftPtr];
        int tmpLeftPtr = leftPtr;
        int tmpRightPtr = rightPtr;
        while (tmpLeftPtr < tmpRightPtr) {
            while (tmpLeftPtr < tmpRightPtr && vec[tmpRightPtr] >= key) {
                tmpRightPtr--;
            }
            while (tmpLeftPtr < tmpRightPtr && vec[tmpLeftPtr] <= key) {
                tmpLeftPtr++;
            }
            std::swap(vec[tmpLeftPtr], vec[tmpRightPtr]);
        }
        std::swap(vec[leftPtr], vec[tmpLeftPtr]);

        sort(vec, leftPtr, tmpLeftPtr - 1);
        sort(vec, tmpLeftPtr + 1, rightPtr);
    }

};