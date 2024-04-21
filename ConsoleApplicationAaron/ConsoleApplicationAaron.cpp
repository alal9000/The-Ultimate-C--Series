#include <iostream>
#include <vector>

using namespace std;

// PascalCase
struct Movie {
	string title;
	int releaseYear = 0;
	bool isPopular;
};


int main() {
	vector<Movie> movies;
	movies.push_back({ "Terminator 1", 1984 });
	movies.push_back({ "Terminator 2", 1987 });
	
	//cout << movies[0].title;

	for (auto& movie : movies)
		cout << movie.title << endl;
	

	return 0;

}

