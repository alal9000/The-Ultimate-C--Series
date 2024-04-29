#include "SmartPointer.h"
#include <iostream>

using namespace std;


int main() {
	SmartPointer ptr{ new int };
	*ptr = 100;
	cout << *ptr << endl;
	*ptr = 101;
	cout << *ptr;


	return 0;

}