#include <iostream>
#include <string>


using namespace std;


void greet(string name) {
	cout << "Hello " << name << endl;
}

void greet(string title, string name) {
	cout << "Hello " << title << " " << name << endl;
}

int main() {

	greet("mosh");
	greet("mr", "mosh");



	return 0;



}
