#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main() {
	int x = 5; // stores the integer 5 in memory location x
	int* y = &x; // y is a pointer which can hold the memory address of an integer, in this case x

	int* z = static_cast<int*>(malloc(sizeof(int)));

	int* a = z;

	cout << *z;
	return 0;
}
