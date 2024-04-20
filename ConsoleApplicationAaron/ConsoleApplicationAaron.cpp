#include <iostream>

using namespace std;


int main() {
	string name = "Mosh, Hamedani";
	//cout << name.find('A');

	//if (name.find("Ham") == -1)
	//	cout << "Doesn't exist";

	cout << name.find_last_not_of(",.;");

	return 0;

}

