#include <iostream>

using namespace std;

int average(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}


int main() {
    int a[5] = {1, 2, 3, 4, 5};
    cout << "rata rata array a : " << average (a, 5) << endl;
}