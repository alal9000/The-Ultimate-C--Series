#include <iostream>

using namespace std;


int main() {
	//int x = 10;
	//int y = 20;

	//int* ptrX = &x;
	//int* ptrY = &x;

	//if (ptrX != nullptr)
	//	cout << *ptrX;

	// ex - my implementation

	//int numbers[] = { 10, 20, 30 };
	//int* ptr = &numbers[2];

	//int i = 2;
	//while (i >= 0) {
	//	cout << numbers[i] << endl;
	//	i--;

	//}

	// ex - mosh implementation
	int numbers[] = { 10, 20, 30 };
	int* ptr = &numbers[size(numbers) - 1];

	while (ptr >= numbers) {
		cout << *ptr << endl;
		ptr--;
	}



	return 0;

}

