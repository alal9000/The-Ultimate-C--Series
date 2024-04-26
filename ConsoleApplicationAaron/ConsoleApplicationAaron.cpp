#include "Rectangle.h"
#include <iostream>

using namespace std;

void showRectangle(Rectangle rectangle) {

}

int main() {
	Rectangle first{10, 20};
	Rectangle second{10, 20};

	cout << Rectangle::getObjectCount() << endl;
	return 0;

}