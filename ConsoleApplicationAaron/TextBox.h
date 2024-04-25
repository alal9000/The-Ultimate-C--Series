#include <iostream>
#include <string>
#pragma once
#ifndef ADVANCED_TEXTBOX_H
#define ADVANCED_TEXTBOX_H

using namespace std;

class TextBox
{
public:
	TextBox() = default;
	explicit TextBox(const string& value);
	string getValue();
	void setValue(const string& value);

private:
	string value;

};

#endif // !ADVANCED_TEXTBOX_H
