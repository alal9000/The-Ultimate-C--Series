#include <iostream>
#include <vector>

using namespace std;

struct Address {
	int zipcode;
	string street;
	string city;
};

struct Customer {
	int id;
	string name;
	string email;
	Address address;
};

struct Date {
	short year = 1900;
	short month = 1;
	short day = 1;
};

struct Movie {
	string title;
	Date releaseDate;
	bool isPopular;
};


int main() {
	//Movie movie{ "Terminator", { 1984, 6, 1 } };
	//cout << movie.releaseDate.year;

	// ex

	Customer customer = { 100, "mosh", "mosh@mosh.com", { 200641, "15 bigge street", "Melbourne"} };

	cout << customer.id << endl;
	cout << customer.name << endl;
	cout << customer.email << endl;
	cout << customer.address.city << endl;
	cout << customer.address.zipcode << endl;
	cout << customer.address.street << endl;

	return 0;

}

