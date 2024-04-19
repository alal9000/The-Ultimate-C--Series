#include <iostream>

using namespace std;


int main() {
	int values[3] = { 10, 20, 30 };
	auto [x, y, z] = values;


	//int x = values[0];
	//int y = values[1];
	//int z = values[2];

	cout << x << ", " << y << ", " << z;



	return 0;

}

