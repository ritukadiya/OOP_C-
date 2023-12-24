/*
Write a program of to sort the array using templates.
*/
#include <iostream>

/*template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}*/

template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Example with integers
    int intArray[] = {64, 34, 25, 12, 22, 11, 90};
    int intArraySize = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Before sorting (integers): ";
    printArray(intArray, intArraySize);

    bubbleSort(intArray, intArraySize);

    std::cout << "After sorting (integers): ";
    printArray(intArray, intArraySize);

    // Example with doubles
    double doubleArray[] = {3.14, 2.71, 1.618, 0.577, 2.718};
    int doubleArraySize = sizeof(doubleArray) / sizeof(doubleArray[0]);

    std::cout << "Before sorting (doubles): ";
    printArray(doubleArray, doubleArraySize);

    bubbleSort(doubleArray, doubleArraySize);

    std::cout << "After sorting (doubles): ";
    printArray(doubleArray, doubleArraySize);

    return 0;
}
