#include <iostream>

using namespace std;


int main() {
	char name[50] = "Mosh";
	char lastName[] = "Hamedani";

	//name[0] = 'm';
	//cout << strlen(name);
	//strcat(name, lastName);

	//strcpy(name, lastName);

	if (strcmp(name, lastName) == 0)
		cout << "Equal";

	//cout << name;

	return 0;

}

