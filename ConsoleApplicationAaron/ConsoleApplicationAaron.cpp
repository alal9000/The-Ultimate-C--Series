#include <iostream>
#include <memory>

using namespace std;


int main() {
	auto x = make_shared<int>();
	
	*x = 10;
	
	shared_ptr<int> y(x);
	if (x == y)
		cout << "Equal";

	cout << *y;

	return 0;

}

