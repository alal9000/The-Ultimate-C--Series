#pragma once
#include <string>
#include <iostream>

using namespace std;
class FileReader
{
public:
	FileReader(string fileName) {
		cout << "Constructor of FileReader" << endl;
	}

	string fileName()
	{
		return "filename";
	}

	string read()
	{
		return "Hello World";
	}
};

