#include "Textbox.h"
#include "Widget.h"
#include "CheckBox.h"
#include <iostream>
#include <vector>
#include <memory>

using namespace std;

void showWidget(Widget& widget) {
	widget.draw();
	
}


int main() {
	//TextBox box;
	//showWidget(box);

	//CheckBox checkbox;
	//showWidget(checkbox);
	vector<unique_ptr<Widget>> widgets;

	widgets.push_back(make_unique<TextBox>());
	widgets.push_back(make_unique<CheckBox>());

	for (const auto& widget : widgets)
		widget->draw();

	return 0;

}