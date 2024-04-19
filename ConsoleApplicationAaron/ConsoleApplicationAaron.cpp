#include <iostream>

using namespace std;

int main() {
	int first[] = { 10, 20, 30 };
	int second[] = { 10, 2, 30 };

	//if (first == second)
	//	cout << "Equal";

	//cout << first << endl;
	//cout << second << endl;

	bool areEqual = true;
	for (int i =0; i < size(first); i++)
		if (first[i] != second[i]) {
			areEqual = false;
			break;
		}

	cout << boolalpha << areEqual;

	return 0;

}

