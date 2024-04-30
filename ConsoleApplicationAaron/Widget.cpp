#include "Widget.h"
#include <iostream>

using namespace std;

Widget::Widget(bool enabled) : enabled{enabled}
{
	cout << "Widget constructed" << endl;
}

void Widget::enable()
{
	enabled = true;
}

void Widget::disable()
{
	enabled = false;
}

bool Widget::isEnabled() const
{
	return enabled;
}
