#include <iostream>
#include <string>
using namespace std;


int main() {

	//for (int x = 1; x <= 5; x++) {
	//	for (int y = 1; y <= 5; y++)
	//		cout << "(" << x << ", " << y << ")" << endl;
	//}

	// ex

	int rows;
	cout << "Rows: ";
	cin >> rows;

	for (int i = 0; i < rows; i++) {
		
		for (int j = 0; j < i + 1; j++) {
			cout << "*";
		}
		cout << endl;
	}


	return 0;



}
