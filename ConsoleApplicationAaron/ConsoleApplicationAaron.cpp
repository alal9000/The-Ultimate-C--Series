#include "Rectangle.h"
#include "SmartPointer.h"
#include <iostream>
#include <memory>

using namespace std;


int main() {
	//auto* rectangle = new Rectangle(10, 20);
	//rectangle->draw();
	//delete rectangle;
	//rectangle = nullptr;

	//auto rectangle = make_unique<Rectangle>(10, 20);
	//rectangle->draw();

	SmartPointer ptr{ new int };


	return 0;

}