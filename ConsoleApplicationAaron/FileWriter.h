#pragma once
#include <iostream>

using namespace std;

class FileWriter
{
public:
	FileWriter(string fileName) {
		cout << "Constructor of FileWriter" << endl;
	}

	void write(string content)
	{
		cout << content;
	}

	string fileName()
	{
		return "filename";
	}
};

