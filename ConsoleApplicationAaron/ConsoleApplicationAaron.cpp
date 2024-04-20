#include <iostream>

using namespace std;


int main() {
	string name = "Mosh";
	//name.append(" Hamedani");
	//name.insert(0, "I am ");
	//name.erase(0, 2);
	//name.clear();
	name.replace(0, 2, "MO");

	cout << name;
	return 0;

}

