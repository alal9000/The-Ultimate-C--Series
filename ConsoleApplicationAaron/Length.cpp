#include "Length.h"
#include <ostream>
#include <iostream>
#include <istream>
using namespace std;

Length::Length(int value) : value(value)
{
}

bool Length::operator==(const Length& other) const
{
	return value == other.value;
}

bool Length::operator==(int other) const
{
	return value == other;
}

bool Length::operator!=(int other) const
{
	return !(value == other);
}

bool Length::operator<(const Length& other) const
{
	return value < other.value;
}

bool Length::operator<=(const Length& other) const
{
	return !(value > other.value);
}

bool Length::operator>(const Length& other) const
{
	return value > other.value;
}

bool Length::operator>=(const Length& other) const
{
	return !(value < other.value);
}

Length Length::operator+(const Length& other) const
{
	return Length(value + other.value);
}

Length& Length::operator+=(const Length& other)
{
	value += other.value;
	return *this;
}

Length& Length::operator++()
{
	value++;
	return *this;
}

Length Length::operator++(int)
{
	Length copy = *this;
	operator++();
	return copy;
}

Length::operator int() const
{
	return value;
}

//Length& Length::operator=(const Length& other)
//{
//	cout << "Object assigned" << endl;
//	value = other.value;
//	return *this;
//}

ostream& operator<<(ostream& stream, const Length& length)
{
	//stream << length.getValue();
	return stream;
}


istream& operator>>(istream& stream, Length& length)
{
	int value;
	stream >> value;
	length.setValue(value);
	return stream;
}


int Length::getValue() {
	return value;
}

void Length::setValue(int value)
{
	Length::value = value;
}
