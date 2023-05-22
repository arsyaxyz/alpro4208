#include <iostream>

using namespace std;

bool isOdd(int n) {
    return n % 2 != 0;
}

void smallestEven(int arr[], int n) {
    int smallest = 0;
    for (int i = 0; i < n; i++){
        if (!isOdd(arr[i]) && arr[i] < arr[smallest])
            smallest = i;
    }
    cout << "smallest even is " << arr[smallest] << endl;
    cout << "index of smallest even is " << smallest << endl;
}

int main() {
    int
        arr[] = {2, 3, 4, 5, 6, 7, 8},
        n = sizeof(arr) / sizeof(arr[0]);

    smallestEven(arr, n);

    return 0;
}
