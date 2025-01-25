#include "sort.h"
#include <iostream>

using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "Sorted array (Selection Sort): ";
    printArray(arr, n);

    int arr1[] = {12, 11, 13, 5, 6};
    int n1 = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr1, n1);

    insertionSort(arr1, n1);

    cout << "Sorted array (Insertion Sort): ";
    printArray(arr1, n1);

    return 0;
}