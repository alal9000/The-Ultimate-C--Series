#include "Length.h"
#include <iostream>

using namespace std;


int main() {
	Length first{ 10 };
	Length second = ++first;

	cout << "First: " << first << endl;
	cout << "Second: " << second << endl;


	return 0;

}