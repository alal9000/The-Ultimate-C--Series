#include "Textbox.h"
#include <iostream>

using namespace std;


int main() {
	TextBox box;
	box.disable();
	cout << box.isEnabled();


	return 0;

}