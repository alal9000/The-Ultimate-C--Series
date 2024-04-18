#include <iostream>
#include <string>


using namespace std;


void increasePrice(double& price) {
	price *= 1.2;
}

void greet(const string& name) {
	cout << "Hello " << name << endl;
}

int main() {

	//double price = 100;
	//increasePrice(price);

	//cout << price;

	string name = "Mosh";
	greet(name);

	cout << name;

	return 0;



}
