#include "Person.h"
#include "TextBox.h"
#include <iostream>

using namespace std;

void showPerson(Person person) {

}

int main() {
	//Person person{ 20 };
	//showPerson(person);

	// ex my solution
	TextBox box{ "Hello world" };

	cout << box.getValue();


	return 0;

}