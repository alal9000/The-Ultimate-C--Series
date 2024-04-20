#include <iostream>

using namespace std;


int main() {
	// stack
	//int numbers[1000];
	int x;

	// heap
	int* numbers = new int[10];
	int* number = new int;
	delete number;
	delete[] numbers;

	number = nullptr;
	numbers = nullptr;



	return 0;

}

