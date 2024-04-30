#include "TextBox.h"

TextBox::TextBox(const string& value) : value{value}
{
}

string TextBox::getValue()
{
	// protected OK
	this->width;
	// private NO
	this.enabled;
	return value;
}

void TextBox::setValue(const string& value)
{
	this->value = value;
}
