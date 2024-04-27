#include "Point.h"

Point::Point(int x, int y) : x(x), y(y)
{

}

int Point::getX()
{
    return x;
}

void Point::setX(int x)
{
    Point::x = x;
}

int Point::getY()
{
    return y;
}

void Point::setY(int y)
{
    Point::y = y;
}

bool Point::operator==(const Point& other) const
{
    return (x == other.x) && (y == other.y);
}
