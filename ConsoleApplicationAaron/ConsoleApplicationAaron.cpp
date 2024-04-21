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
	//string title = movie.title;
	//int releaseYear = movie.releaseYear;
	//bool isPopular = movie.isPopular;

	auto [title, releaseYear, isPopular] { movie };

	cout << title;
	

	

	return 0;

}

