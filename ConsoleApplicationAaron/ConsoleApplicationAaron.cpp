#include <iostream>

using namespace std;

void increasePrice(double* price) {
	*price *= 1.2;
}

// ex - my solution same as mosh
void swap(int* first, int* second) {
	int temp;
	temp = *first;
	*first = *second;
	*second = temp;

}

int main() {
	//double price = 100;

	//increasePrice(&price);
	//
	//cout << price;

	// ex - my solution same as mosh

	int x = 10;
	int y = 20;

	swap(&x, &y);

	// should see 12 and 50 if working
	cout << x << endl << y;





	return 0;

}

