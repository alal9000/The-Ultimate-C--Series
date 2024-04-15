#include <iostream>
#include <iomanip>


using namespace std;

int main() {
	cout << left; 
	cout << setw(10) << "Spring" << setw(10) << "Nice" << endl
		 << setw(10) << "Summer" << setw(10) << "Hot" << endl;

	cout << fixed << setprecision(10) << 12.34567 << endl
		 << 22.123456 << endl;

	// exercise my solution
	cout << left;
	cout << setw(10) << "Course" << setw(10) << "Students" << endl
	     << setw(10) << "C++" << right << setw(10) << 100 << endl
		 << setw(10) << "JavaScript" << right << setw(10) << 100 << endl;

	// exercise mosh solution
	cout << left << setw(15) << "Course" << setw(10) << "Students" << endl
		<< setw(15) << "C++" << setw(10) << right << 100 << left << endl
		<< setw(15) << "JavaScript" << setw(10) << right << 50 << left << endl;


}
