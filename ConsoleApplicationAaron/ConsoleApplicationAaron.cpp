#include <iostream>
#include <string>


using namespace std;

int main() {

	//int numbers[] = {10, 20};
	//cout << numbers[2];


	

	// ex my solution - same as mosh's

	string names[3];

	cout << "What is the first name?: " << endl;
	getline(cin, names[0]);

	cout << "What is the second name?: " << endl;
	getline(cin, names[1]);

	cout << "What is the third name?: " << endl;
	getline(cin, names[2]);

	cout << "The first name is " << names[0];

	return 0;




}
