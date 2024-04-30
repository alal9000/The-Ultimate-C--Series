#include "Widget.h"
#include <iostream>

using namespace std;

//Widget::Widget(bool enabled) : enabled{enabled}
//{
//	cout << "Widget constructed" << endl;
//}

//Widget::~Widget()
//{
//	cout << "Widget destructed" << endl;
//}

void Widget::draw() const
{
	cout << "Drawing a widget" << endl;
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
