#include <iostream>

using namespace std;


int main() {
	
	int numbers[] = { 10, 20, 30 };
	int* ptr = numbers;
	//ptr++;
	//ptr--;
	// 100

	cout << *(ptr + 1);
	cout << ptr[1];
	cout << numbers[1];






	return 0;

}

