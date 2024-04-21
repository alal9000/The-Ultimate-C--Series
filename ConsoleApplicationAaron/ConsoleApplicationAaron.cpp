#include <iostream>
#include <memory>

using namespace std;

// PascalCase
struct Movie {
	string title;
	int releaseYear = 0;
	bool isPopular;
};


int main() {

	Movie movie = {"Terminator", 1984};

	cout << movie.releaseYear;
	

	

	return 0;

}

