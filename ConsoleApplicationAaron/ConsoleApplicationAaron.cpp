#include "Textbox.h"
#include "Widget.h"
#include "CheckBox.h"
#include <iostream>

using namespace std;

void showWidget(Widget& widget) {
	widget.draw();
	
}


int main() {
	TextBox box;
	showWidget(box);

	CheckBox checkbox;
	showWidget(checkbox);


	return 0;

}