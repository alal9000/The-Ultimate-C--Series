#pragma once
#ifndef ADVANCED_SMARTPOINTER
#define ADVANCED_SMARTPOINTER

using namespace std;

class SmartPointer
{
public:
	SmartPointer() = default;
	explicit SmartPointer(int* ptr);
	~SmartPointer();
	int& operator*();

	int* getPtr() const;
	void setWidth(int* ptr);

private:
	int* ptr;

};

#endif // !ADVANCED_SMARTPOINTER
