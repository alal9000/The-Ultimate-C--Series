#include <string>
#pragma once
#ifndef ADVANCED_RECTANGLE_H
#define ADVANCED_RECTANGLE_H

using namespace std;

class Rectangle
{
public:
	Rectangle() = default;
	Rectangle(const Rectangle& source) = delete;
	Rectangle(int width, int height);
	Rectangle(int width, int height, const string& color);
	~Rectangle();
	void draw();
	int getArea();
	int getWidth(); // gettor
	void setWidth(int width); // setter
	int getHeight(); // gettor
	void setHeight(int width); // setter
private:
	int width = 0;
	int height = 0;
	string color;

};

#endif // !ADVANCED_RECTANGLE_H
