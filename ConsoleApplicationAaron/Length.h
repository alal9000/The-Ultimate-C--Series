#pragma once
#include <ostream>
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


ostream& operator<<(ostream&, const Length& length);
