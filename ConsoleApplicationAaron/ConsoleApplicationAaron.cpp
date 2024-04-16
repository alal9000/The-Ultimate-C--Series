#include <iostream>
#include <string>


using namespace std;

int main() {

	cout << "1- create account" << endl
		<< "2- Change password" << endl
		<< "3- Quit" << endl
		<< "Select an option: ";

	short input;
	cin >> input;

	switch (input) {
		case 1:
			cout << "You selected 1";
			break;

		case 2:
			cout << "You selected 2";
			break;

		case 3:
			cout << "You selected 3";
			break;
		default:
			cout << "Goodbye!";
	}

	

	


	return 0;




}
