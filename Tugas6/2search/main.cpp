#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Algoritma pencarian linear search
bool linearSearch(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

// Algoritma pencarian binary search
bool binarySearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return true;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

int main() {
    vector<int> arr = { 1, 2, 4, 5, 6, 8, 9 };

    // Pencarian linear search
    int target1 = 5;
    bool found1 = linearSearch(arr, target1);
    cout << "Linear Search: ";
    if (found1) {
        cout << target1 << " ditemukan." << endl;
    } else {
        cout << target1 << " tidak ditemukan." << endl;
    }

    // Pencarian binary search
    int target2 = 3;
    bool found2 = binarySearch(arr, target2);
    cout << "Binary Search: ";
    if (found2) {
        cout << target2 << " ditemukan." << endl;
    } else {
        cout << target2 << " tidak ditemukan." << endl;
    }

    return 0;
}
