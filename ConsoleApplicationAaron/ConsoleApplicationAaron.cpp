#include "Rectangle.h"
#include "TextBox.h"
#include <iostream>

using namespace std;

int main() {
	//Rectangle rectangle;
	//rectangle.setWidth(-1);

	// ex - mine and mosh implementation
	TextBox textbox;
	textbox.setValue("Hello world");

	cout << textbox.getValue();


	return 0;

}