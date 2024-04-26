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

	void draw() const;
	int getArea() const;
	int getWidth() const; // gettor
	int getHeight() const; // gettor

	void setWidth(int width); // setter
	void setHeight(int width); // setter

	static int getObjectCount();
private:
	int width = 0;
	int height = 0;
	string color;

	static int objectsCount;

};

#endif // !ADVANCED_RECTANGLE_H
