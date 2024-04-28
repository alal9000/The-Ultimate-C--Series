#pragma once
#include <ostream>
#include <istream>

using namespace std;
class Length
{
public:
	explicit Length(int value);
	bool operator==(const Length& other) const;
	bool operator==(int other) const;
	bool operator!=(int other) const;
	bool operator<(const Length& other) const;
	bool operator<=(const Length& other) const;
	bool operator>(const Length& other) const;
	bool operator>=(const Length& other) const;

	int getValue();
	void setValue(int value);
private:
	int value;
};


ostream& operator<<(ostream& stream, const Length& length);
istream& operator>>(istream& stream, Length& length);
