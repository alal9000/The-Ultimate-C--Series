#include <iostream>
#include <string>
#include "Widget.h"
#pragma once
#ifndef ADVANCED_TEXTBOX_H
#define ADVANCED_TEXTBOX_H

using namespace std;

class TextBox final : public Widget
{
public:
	// Overriding
	~TextBox();
	void draw() const override final;
	string getValue();
	void setValue(const string& value);

private:
	string value;

};

#endif // !ADVANCED_TEXTBOX_H
