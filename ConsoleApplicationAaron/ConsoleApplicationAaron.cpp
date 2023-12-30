#include <iostream>

using namespace std;

int main() {

	int sales = 95000;
	const int state_tax_percent = 4;
	const int county_tax_percent = 2;

	double state_tax = (state_tax_percent / 100.0) * sales;
	double county_tax = (county_tax_percent / 100.0) * sales;
	double total_tax = state_tax + county_tax;

	cout << "sales " << sales << endl
		<< "state_tax " << state_tax << endl
		<< "county_tax " << county_tax << endl
		<< "total_tax " << total_tax;
}
