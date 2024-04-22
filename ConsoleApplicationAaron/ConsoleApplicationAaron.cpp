#include <iostream>

using namespace std;

enum Action {
	List = 1,
	Add = 2,
	Update = 3
};


int main() {
	//const int list = 1;
	//const int add = 2;
	//const int update = 3;
	cout <<
		"1: List invoices" << endl <<
		"2: Add invoice" << endl <<
		"3: Update invoices" << endl <<
		"Select: ";

	int input;
	cin >> input;

	if (input == Action::List) {
		cout << "List invoices";

	}



	return 0;

}