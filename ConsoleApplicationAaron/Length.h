#include <ostream>
#include <istream>

using namespace std;
class Length
{
public:
	explicit Length(int value);
	Length() = default;
	//Length(const Length& other) = delete;

	bool operator==(const Length& other) const;
	bool operator==(int other) const;
	bool operator!=(int other) const;
	bool operator<(const Length& other) const;
	bool operator<=(const Length& other) const;
	bool operator>(const Length& other) const;
	bool operator>=(const Length& other) const;
	Length operator+(const Length& other) const;
	Length& operator+=(const Length& other);
	//Length& operator=(const Length& other) = delete;
	Length& operator++(); // prefix
	Length operator++(int); // postfix
	explicit operator int() const;


	int getValue();
	void setValue(int value);
private:
	int value;
};


ostream& operator<<(ostream& stream, const Length& length);
//istream& operator>>(istream& stream, Length& length);
