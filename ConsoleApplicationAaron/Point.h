#pragma once
class Point
{
public:

	Point(int x, int y);
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);
	bool operator==(const Point& other) const;

private:
	int x;
	int y;
};

