#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double radius;
	const double pi = 3.141592654;

	cout << "Input the radius of a circle: ";
	cin >> radius;

	double area = (radius * radius) * pi;
	cout << area;

	return 0;
}
