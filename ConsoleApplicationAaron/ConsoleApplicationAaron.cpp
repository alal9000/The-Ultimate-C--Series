#include "Length.h"
#include <iostream>

using namespace std;


int main() {
	Length first{ 10 };
	Length second{ 10 };

	Length third = first + second;
	first += second;

	cout << third;


	return 0;

}