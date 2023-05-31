#include <iostream>
#include <vector>

int maxN(int a, int b){
    int temp = 0;
    if (a > b)  temp = a;
    else  temp = b;

    return temp;
}

int minN(int a, int b){
    int temp = 0;
    if (a < b)  temp = a;
    else  temp = b;

    return temp;
}

int maxArray(std::vector <int> arr){
    int temp = 0;
    for (size_t i = 0; i < arr.size(); i++)
    {
        if(arr[i] > temp)
            temp = arr[i];
    }

    return temp;
}

int minArray(std::vector <int> arr){
    int temp = arr[1];
    for (size_t i = 0; i < arr.size(); i++)
    {
        if(arr[i] < temp)
            temp = arr[i];
    }

    return temp;
}

bool isEven(int x){
    if (x % 2 == 0)
        return true;
    else
        return false;
}

bool isOdd(int x){
    if (x % 2 != 0)
        return true;
    else
        return false;
}

bool isFactor(int x, int f){
    if (x % f == 0)
        return true;
    else
        return false;
}

int sumEven(std::vector <int> arr){
    int temp = 0;
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
        {
            temp += arr[i];
        }
    }

    return temp;
}

int sumOdd(std::vector <int> arr){
    int temp = 0;
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 != 0)
        {
            temp += arr[i];
        }
    }

    return temp;
}

int main(){
    std::cout << "max_n : " << maxN(12, 15) << std::endl;
    std::cout << "min_n : " << minN(14, 11) << std::endl;

    std::vector <int> arr {1, 4, 34, 28, 16};
    std::cout << "Array Elements : ";
    for (size_t i = 0; i < arr.size(); i++)
    {
         std::cout << arr[i];
        if (i < arr.size() - 1)
        {
           std::cout << ", ";
        }
    }

    std::cout << "\nmax_array : " << maxArray(arr) << std::endl;
    std::cout << "min_array : " << minArray(arr) << std::endl;

    std::cout << std::boolalpha;
    std::cout << "is 15 even : "<< isEven(12) << std::endl;
    std::cout << "is 18 odd : " << isOdd(18) << std::endl;

    std::cout << "is factor (12, 6) : " << isFactor(12, 6) << std::endl;

    std::cout << "sum even : " << sumEven(arr) << std::endl;
    std::cout << "sum odd : " << sumOdd(arr);

    return 0;
}
