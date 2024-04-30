#include <iostream>
#include <string>
#include "Widget.h"
#pragma once
#ifndef ADVANCED_TEXTBOX_H
#define ADVANCED_TEXTBOX_H

using namespace std;

class TextBox : public Widget
{
public:
	//TextBox(bool enabled);
	using Widget::Widget;
	explicit TextBox(bool enabled, const string& value);
	string getValue();
	void setValue(const string& value);

private:
	string value;

};

#endif // !ADVANCED_TEXTBOX_H
