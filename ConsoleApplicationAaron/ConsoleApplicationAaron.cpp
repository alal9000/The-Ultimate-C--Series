#include <iostream>

using namespace std;





int main() {

	//int number = 10;

	//int* ptr = &number;

	//*ptr = 20;

	////cout << *ptr;

	//cout << number;

	// ex
	int x = 10;
	int y = 20;
	int* ptr = &x;
	*ptr *= 2;
	ptr = &y;
	*ptr *= 3;

	cout << x << endl << y;

	



	return 0;

}

