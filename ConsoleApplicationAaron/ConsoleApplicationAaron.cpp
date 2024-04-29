#include "Length.h"
#include <iostream>

using namespace std;


int main() {
	Length length{ 10 };
	int x = static_cast<int>(length);

	cout << x;


	return 0;

}