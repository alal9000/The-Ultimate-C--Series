#pragma once
#ifndef ADVANCED_RECTANGLE_H
#define ADVANCED_RECTANGLE_H



class Rectangle
{
public:
	Rectangle() = default;
	Rectangle(int width, int height);
	void draw();
	int getArea();
	int getWidth(); // gettor
	void setWidth(int width); // setter
	int getHeight(); // gettor
	void setHeight(int width); // setter
private:
	int width = 0;
	int height = 0;

};

#endif // !ADVANCED_RECTANGLE_H
