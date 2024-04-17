#include <iostream>
#include <string>


using namespace std;

int main() {

	/*for (int i = 1; i <= 5; i++)
		cout << i << endl;

	int i = 1;
	while (i <= 5) {
		cout << i << endl;
		i++;
	}*/

	int number = 0;
	while (number < 1 || number > 5) {
		cout << "number: ";
		cin >> number;
		if (number < 1 || number > 5)
			cout << "Enter a number between 1 and 5" << endl;
	}





	return 0;




}
