#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main() {
	int x = 5; // stores the integer 5 in memory location x
	int* y = &x; // y is a pointer which holds the address of integer x

	cout << *y;
	return 0;
}
