#include <iostream>

using namespace std;

int tambah(int a, int b){
    int hasil;
    hasil = a + b;
    return hasil;
}

int main()
{
    int a,b;
    cout << " masukan nilai a : ";
    cin >> a;
    cout << " masukan niali b : ";
    cin >> b;
    cout << " hasil: " << tambah(a,b) << endl;
    return 0;
}