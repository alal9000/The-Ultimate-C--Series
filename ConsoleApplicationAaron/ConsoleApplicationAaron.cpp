#include <iostream>
#include "Rectangle.h"
#include "ConsoleApplicationAaron.h"



using namespace std;

void createRectangle() {
	Rectangle rect;
	rect.setWidth(-1);
}

void doWork() {
	createRectangle();
}


int main() {
	try
	{

		doWork();
	}
	catch (const exception& ex)
	{
		cout << ex.what();
	}

	return 0;

}