#include <iostream>
#include <string>


using namespace std;

int main() {

	//bool a = true;
	//bool b = false;
	//bool c = false;
	//bool result = (a || b) && c;

	//cout << boolalpha << result;

	// exercise

	bool isCitizen = false;
	bool hasBachelorsDegree = true;
	short yearsWorkExperience = 10;

	bool isEligible = isCitizen && (hasBachelorsDegree || yearsWorkExperience >= 2);

	cout << boolalpha << isEligible;




	return 0;




}
