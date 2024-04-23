#include <iostream>

using namespace std;


// ex - mine and mosh solution
int readValue(const string& message) {
	int number;
	while (true) {
		cout << message << ": ";
		cin >> number;
		if (cin.fail()) {
			cout << "Enter a valid number" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else break;
		

	}
	return number;

}


int main() {
	
	int first = readValue("first");
	int second = readValue("Second");

	cout << "You entered " << first << " and " << second;


	return 0;

}