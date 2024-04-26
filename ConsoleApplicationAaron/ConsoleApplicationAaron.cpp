#include "Rectangle.h"
#include <iostream>

using namespace std;


int main() {
	Rectangle rectangles[] = {
		{},
		{10, 20},
		{10, 20, "blue"}
	};
	rectangles[0].draw();

	for (Rectangle& rect : rectangles)
		rect.draw();


	return 0;

}