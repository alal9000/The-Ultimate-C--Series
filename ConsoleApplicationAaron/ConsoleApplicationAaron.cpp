#include <iostream>

using namespace std;





int main() {

	// const variable but not pointer
	//const int x = 10;
	//const int* ptr = &x;

	//int y = 20;

	//ptr = &y;

	// constant pointer but not variable
	//int x = 10;
	//int* const ptr = &x;

	//int y = 20;
	//ptr = &y;

	// both data and pointer are constant
	const int x = 10;
	const int* const ptr = &x;



	return 0;

}

