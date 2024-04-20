#include <iostream>

using namespace std;

void swap(int numbers[], int i, int j) {
	int temp = numbers[i];
	numbers[i] = numbers[j];
	numbers[j] = temp;
}

void bubbleSort(int numbers[], int size) {

	for (int pass = 0; pass < size; pass++) {
		for (int i = 1; i < size; i++) {
			if (numbers[i] < numbers[i - 1])
				swap(numbers, i, i - 1);

		}
	}


}


int main() {
	// bubble sort ex
	int numbers[] = { 1 };

	bubbleSort(numbers, size(numbers));

	for (int number : numbers) {
		cout << number << endl;
	}

	return 0;

}

