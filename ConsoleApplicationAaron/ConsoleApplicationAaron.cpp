#include <iostream>

using namespace std;


int main() {
	int first;
	int second;

	cout << "First: ";
	cin >> first;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Second: ";
	cin >> second;

	cout << "You entered " << first << " and " << second;


	return 0;

}