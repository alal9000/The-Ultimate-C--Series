#include "Length.h"
#include <iostream>

using namespace std;


int main() {
	Length first{ 10 };
	Length second{ 10 };

	// copy constructor (new)
	Length second = first;

	// assingment operator (exisiting)
	first = second;


	return 0;

}