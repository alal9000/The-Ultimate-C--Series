#include <iostream>

using namespace std;

int main() {
	double fahrenheit;
	double celsius;

	cout << "Enter fahrenheit: ";
	cin >> fahrenheit;

	celsius = (fahrenheit - 32) * 5 / 9;

	cout << "Celsius is: " << celsius;

	return 0;
}
