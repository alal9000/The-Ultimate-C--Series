#include "Length.h"
#include <ostream>
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

ostream& operator<<(ostream& stream, Length& length)
{
	stream << length.getValue();
	return stream;
}


int Length::getValue() {
	return value;
}

void Length::setValue(int value)
{
	Length::value = value;
}
