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
	int numbers[] = { 1'000'000, 2'000'000, 3'000'000 };

	ofstream file("numbers2.dat", ios::binary);
	if (file.is_open()) {
		file.write(reinterpret_cast<char*>(&numbers), sizeof(numbers));
		file.close();
	}



	return 0;

}