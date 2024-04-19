#include <iostream>

using namespace std;

int linearSearch(int array[], int arraySize, int value) {
	for (int i = 0; i < arraySize; i++) {
		if (array[i] == value)
			return i;

	}
	return -1;
}

// ex mine and mosh implementation

int main() {

	int array[] = { 6, 5, 10, 2, 3, 4, 1, 9 };

	int index = linearSearch(array, size(array), 6);

	cout << "Index is: " << index;
	



	return 0;

}

