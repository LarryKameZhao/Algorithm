#include <iostream>
#include "EasySort.h"
#include  "SortHelper.h"
#include "HeapSort.h"
using namespace std;
int main() {

    int n = 60000;
    int *arr1 = SortTestHelper::generateRandomArray(n,100,200);
    int *arr2 = SortTestHelper::copyIntArray(arr1,n);
    int *arr3 = SortTestHelper::copyIntArray(arr1,n);
    int *arr4 = SortTestHelper::copyIntArray(arr1,n);
    SortTestHelper::testSort("Bubble sort:",EasySort::BubbleSort,arr1,n);
    SortTestHelper::testSort("Insert Sort",EasySort::InsertSort,arr2,n);
    SortTestHelper::testSort("Selection Sort",EasySort::SelectionSort,arr3,n);
    SortTestHelper::testSort("Heap Sort",HeapSort::heapSort,arr4,n);

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    delete[] arr4;
    return 0;
}