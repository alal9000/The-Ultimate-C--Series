#include <iostream>

using namespace std;


int main() {
	//string name = "Mosh Hamedani";
	//string copy = name.substr(5, 3);
	//name = "";

	//cout << copy;

	// ex - my solution

	//string name = "Mosh Hamedani";
	//string first = name.substr(0, 4);
	//string last = name.substr(5);

	//cout << first << endl;
	//cout << last << endl;

	// ex - mosh solution

	string name = "Mosh Smith Hamedani";
	auto index = name.rfind(' ');
	string first = name.substr(0, index);
	string last = name.substr(index + 1);

	cout << first << endl;
	cout << last << endl;

	

	return 0;

}

