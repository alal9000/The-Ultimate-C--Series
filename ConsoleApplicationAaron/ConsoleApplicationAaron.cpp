#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main() {
	srand(time(0));
	int maxValue = 6;
	int minValue = 1;
	int number = (rand() % (maxValue - minValue + 1)) + minValue;
	cout << maxValue;
	cout << minValue;
	return 0;
}
