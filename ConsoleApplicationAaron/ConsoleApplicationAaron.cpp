#include <iostream>
#include <string>


using namespace std;


void greet(string name) {
	cout << "Hello " << name << endl;
}

string fullName(string firstName, string lastName) {
	return firstName + " " + lastName;
}

int main() {

	//greet("Mosh", "Hamedani");


	//cout << name << endl;

	greet(fullName("Mosh", "Hamedani"));

	cout << "Done";



	return 0;



}
