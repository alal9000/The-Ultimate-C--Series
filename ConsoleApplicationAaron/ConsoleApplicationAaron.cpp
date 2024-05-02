#include <iostream>
#include "Array.h"
#include "Pair.h"

using namespace std;


int main() {
	Array<Pair<string, int>> array{ 10 };
	array[0] = {"A", 1};
	cout << array[0];
	

	return 0;

}