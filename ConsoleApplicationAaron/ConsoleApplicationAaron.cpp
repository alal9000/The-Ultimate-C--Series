#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Movie {
	int id;
	string title;
	int year;
};


int main() {
	int numbers[3];

	ifstream file("numbers.dat", ios::binary);
	if (file.is_open()) {
		int number;
		while (file.read(reinterpret_cast<char*>(&number), sizeof(number))) 
			cout << number;
		file.close();
	}



	return 0;

}