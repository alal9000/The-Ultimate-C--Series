#include <iostream>
#include <string>


using namespace std;

int main() {

	//int numbers[] = {1, 2, 3, 4};
	//for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
	//	cout << numbers[i] << endl;

	//for (int number : numbers)
	//	cout << number << endl;

	//string name = "Mosh Hamedani";

	//for (char ch : name)
	//	cout << ch << endl;

	// ex - my implementation

	//int temps[] = { 20, 38, 40, 50, 9 };
	//int total = 0;
	//int count = 0;

	//for (int temp : temps) {

	//	total += temp;
	//	count++;
	//}

	//double average = total / static_cast<double>(count);

	//cout << total << endl << count << endl << average;

	// ex - mosh implementation

	int temps[] = { 60, 80, 90 };
	double sum = 0;
	short count = sizeof(temps) / sizeof(int);

	for (int temp : temps)
		sum += temp;

	double average = sum / count;

	cout << average;




	return 0;




}
