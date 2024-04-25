#pragma once
#ifndef ADVANCED_RECTANGLE_H
#define ADVANCED_RECTANGLE_H



class Rectangle
{
public:
	void draw();
	int getArea();
	int getWidth(); // gettor
	void setWidth(int width); // setter
	int getHeight(); // gettor
	void setHeight(int width); // setter
private:
	int width;
	int height;

};

#endif // !ADVANCED_RECTANGLE_H
