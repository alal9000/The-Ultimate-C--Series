#include "TextBox.h"
#include <iostream>

using namespace std;

//TextBox::TextBox(bool enabled) : Widget(enabled)
//{
//	cout << "TextBox constructed" << endl;
//}

TextBox::TextBox(bool enabled, const string& value) : Widget(enabled), value{value}
{
}

string TextBox::getValue()
{
	// protected OK
	this->width;
	// private NO
	return value;
}

void TextBox::setValue(const string& value)
{
	this->value = value;
}
