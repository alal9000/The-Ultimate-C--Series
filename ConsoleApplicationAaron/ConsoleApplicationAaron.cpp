#include <iostream>

using namespace std;

// ex my solution
//bool isValid(string customerNumber) {
//	bool valid = true;
//
//	if (customerNumber.length() != 6)
//		return valid = false;
//
//
//	for (int i = 0; i < 2; i++) {
//		if (!isalpha(customerNumber[i]))
//			return valid = false;
//	}
//
//	for (int i = 2; i < 6; i++) {
//		if (!isdigit(customerNumber[i]))
//			return valid = false;
//	}
//
//	return valid;
//
//}

// ex mosh solution
bool isValid(string customerNumber) {

	if (customerNumber.length() != 6)
		return false;

	for (int i = 0; i < 2; i++) {
		if (!isalpha(customerNumber[i]))
			return false;
	}

	for (int i = 2; i < customerNumber.length(); i++) {
		if (!isdigit(customerNumber[i]))
			return false;
	}

	return true;

}


int main() {
	//string name = " Mosh Hamedani";
	//cout << (char) toupper('a');

	//char input;
	//if (tolower(input) == 'x')
	//	break;

	// ex

	//bool result = isValid("AB1234");

	//cout << boolalpha << result;

	string customerNumber = "1B1234";
	cout << isValid(customerNumber);


	return 0;

}