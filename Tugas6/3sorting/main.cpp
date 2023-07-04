#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Algoritma pengurutan bubble sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Algoritma pengurutan selection sort
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

// Algoritma pengurutan insertion sort
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    vector<int> arr = { 8, 2, 5, 9, 1, 6 };

    // Pengurutan bubble sort
    bubbleSort(arr);
    cout << "Bubble Sort: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Pengurutan selection sort
    vector<int> arr2 = { 8, 2, 5, 9, 1, 6 };
    selectionSort(arr2);
    cout << "Selection Sort: ";
    for (int num : arr2) {
        cout << num << " ";
    }
    cout << endl;

    // Pengurutan insertion sort
    vector<int> arr3 = { 8, 2, 5, 9, 1, 6 };
    insertionSort(arr3);
    cout << "Insertion Sort: ";
    for (int num : arr3) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
