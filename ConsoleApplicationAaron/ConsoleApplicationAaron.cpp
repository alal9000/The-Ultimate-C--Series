#include <iostream>
#include <memory>

using namespace std;

// PascalCase
struct Movie {
	string title;
	int releaseYear;
};

struct Customer {
	int ID;
	string name;
	string email;
};

int main() {

	/*Movie movie;
	movie.title = "Terminator";
	movie.releaseYear = 1984;
	cout << "Title: " << movie.title << endl
		 << "Release Year: " << movie.releaseYear;*/

	// ex
	Customer customer;

	cout << "Please enter customer ID: " << endl;
	cin >> customer.ID;

	cout << "Please enter customer name: " << endl;
	cin >> customer.name;

	cout << "Please enter customer email: " << endl;
	cin >> customer.email;

	cout << "Customer name: " << customer.name << endl
		 << "Customer email: " << customer.email << endl
		 << "Customer ID: " << customer.ID << endl;

	

	return 0;

}

