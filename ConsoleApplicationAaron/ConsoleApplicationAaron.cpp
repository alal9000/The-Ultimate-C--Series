#include <iostream>

using namespace std;

const int rows = 2;
const int columns = 3;

void printMatrix(int matrix[rows][columns]) {
	for (int row = 0; row < rows; row++) {
		for (int column = 0; column < columns; column++) {
			cout << matrix[row][column] << endl;
		}
	}

}


int main() {

	// 2x3
	int matrix[rows][columns] = {
		{11, 12, 13},
		{21, 22, 23}
	};

	printMatrix(matrix);
	


	return 0;

}

