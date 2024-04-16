#include <iostream>
#include <string>


using namespace std;

int main() {

	//int temp = 100;

	//if (temp < 60)
	//	cout << "Cold" << endl;
	//else if (temp < 90)
	//	cout << "Nice";
	//else
	//	cout << "Hot";

	// exercise - my implementation

	//int sales = 15'020;
	//int commission;

	//if (sales < 10'000)
	//	commission = 10;
	//else if (sales <= 15'000)
	//	commission = 15;
	//else
	//	commission = 20;

	//cout << commission;

	// exercise - mosh implementation

	int sales = 50'000;
	double commission;

	if (sales <= 10'000)
		commission = .1;
	else if (sales <= 15'000)
		commission = .15;
	else
		commission = .2;

	cout << commission;


	return 0;




}
