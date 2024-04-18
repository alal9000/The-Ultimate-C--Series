#include <iostream>
#include <string>


using namespace std;

// function declaration
void greet(string name);

int main() {

	greet("poop");


	return 0;



}

// function definition
void greet(string name) {
	cout << "Hello " << name;
}
