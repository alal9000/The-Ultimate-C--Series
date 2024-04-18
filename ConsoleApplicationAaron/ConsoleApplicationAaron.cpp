#include <iostream>
#include <string>


using namespace std;

// global variable - global scope
double taxRate = .2;

double calculateTax(int sales) {
	return sales * taxRate;
}



int main() {
	// local variable - local scope
	int sales = 10'000;
	taxRate = 0;
	double tax = calculateTax(sales);
	cout << tax;



	return 0;



}
