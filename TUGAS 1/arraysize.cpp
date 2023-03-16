#include <iostream>

using namespace std;

int main(){
    int jml_arr;
    int angka[] = {100, 56, 67, 44, 76, 32, 80};
    jml_arr = sizeof(angka) / sizeof(*angka);

    for(int a = 0; a < jml_arr; a++){
        cout << angka[a] << endl;
    }
}