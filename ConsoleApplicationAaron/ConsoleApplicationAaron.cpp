#include <iostream>
#include "Rectangle.h"



using namespace std;


int main() {
	try
	{
		cout << "Width: ";
		int width;
		cin >> width;

		Rectangle rect;
		rect.setWidth(width);

		cout << "Done";

	}
	catch (const out_of_range& ex)
	{
		cout << ex.what();

	}
	catch (const logic_error& ex)
	{
		cout << ex.what();

	}
	

	cout << "End of program";

	return 0;

}