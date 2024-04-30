#pragma once
#include "Widget.h"
#include <iostream>

using namespace std;

class CheckBox : public Widget
{
	void draw() const
	{
		cout << "Drawing a CheckBox" << endl;
	}
};

