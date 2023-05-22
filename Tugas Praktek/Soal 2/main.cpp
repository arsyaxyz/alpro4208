#include <iostream>

using namespace std;

void bubbleSort(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size-1; j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        cout << endl;
        cout << "Tahap ke-" << i+1 << " : ";
        for(int a = 0; a < size; a++){
            cout << arr[a] << " ";
        }
        cout << endl;
    }
}

void selectionSort(int arry[], int size){
    for(int b=0; b < size; b++){
        int temp = arry[b];
        int pos = b;

        for(int c = b; c < size; c++){
            if(arry[c] > temp){
                temp = arry[c];
                pos = c;
            }
        }
        arry[pos] = arry[b];
        arry[b] = temp;
        cout << endl;
        cout << "Tahap ke-" << b+1 << " : ";
        for(int d = 0; d < size; d++){
            cout << arry[d] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[]={1,1,2,2,3,4,5};
    int size = sizeof(arr)/sizeof(*arr);

    int arry[]={1,1,2,2,3,4,5};
    size = sizeof(arry)/sizeof(*arry);

    bubbleSort(arr, size);
    cout << "================================================";
    selectionSort(arry, size);

    return 0;
}
