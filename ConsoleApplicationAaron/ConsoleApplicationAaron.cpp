#include <iostream>
#include <string>


using namespace std;

int main() {

	//int sales = 11'000;
	//double commission = (sales > 10'000) ? .1 : 0.5;

	//cout << commission;

	// ex - my implementation

	int number1;
	int number2;
	int number3;

	cout << "enter number 1: ";
	cin >> number1;

	cout << "enter number 2: ";
	cin >> number2;

	//if (number1 > number2)
	//	number3 = number1;
	//else
	//	number3 = number2;

	number3 = (number1 > number2) ? number1 : number2;

	cout << "The largest value is: " << number3 << endl;


	return 0;




}
