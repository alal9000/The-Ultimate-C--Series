#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main() {

	// exercise my solution

	//string street;
	//string city;
	//string state;
	//string zip;

	//cout << "Enter your street: ";
	//getline(cin, street);

	//cout << "Enter your city: ";
	//getline(cin, city);

	//cout << "Enter your state: ";
	//getline(cin, state);

	//cout << "Enter your zip: ";
	//getline(cin, zip);


	//cout << street << endl;
	//cout << city << ", " << state << ", " << zip;


	// exercise mosh solution

	string street;
	cout << "Enter your street: ";
	getline(cin, street);

	string city;
	cout << "Enter your city: ";
	getline(cin, city);

	string state;
	cout << "Enter your state: ";
	getline(cin, state);
	
	string zip;
	cout << "Enter your zip: ";
	getline(cin, zip);

	cout << street << endl
		 << city << ", " << state << ", " << zip;


	return 0;




}
