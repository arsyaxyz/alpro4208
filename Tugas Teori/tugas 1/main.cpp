#include <iostream>

/*
    Nama : M. Luthfi Arsyada
    NIM : A11.2022.14337
    Kelompok : 4208
*/

int addition(int m, int n) {
	if (n == 0){
		return m;
	}
	else {
		return 1 + addition(m, n - 1);
	}
}

int subtraction(int m, int n) {
	if (n == 0){
		return m;
	}
	else {
		return subtraction(m - 1, n - 1);
	}
}

int multipy(int m, int n) {
	if (n == 1) {
		return m;
	}
	else {
		return m + multipy(m, n - 1);
	}
}

int division(int m, int n) {
	int count = 0;
	if (m < n){
		return count;
	}

	count = count + 1;

	return division(m - n, n) + count;
}

int power(int m, int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return m;
	}
	else {
		return m * power(m, n - 1);
	}
}


int main() {
	std::cout << "multiply : " << multipy(10, 10) << std::endl;
	std::cout << "addition  : " << addition(10, 3) << std::endl;
	std::cout << "subtraction : " << subtraction(4, 1) << std::endl;
	std::cout << "power : " << power(2, 4) << std::endl;
	std::cout << "Division : " << division(4, 2);

	return 0;
}
