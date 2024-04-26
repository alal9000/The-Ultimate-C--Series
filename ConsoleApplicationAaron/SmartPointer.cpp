#include "SmartPointer.h"

SmartPointer::SmartPointer(int* ptr) : ptr{ptr}
{

}

SmartPointer::~SmartPointer()
{
	delete ptr;
	ptr = nullptr;
}

int* SmartPointer::getPtr() const
{
	return ptr;
}

void SmartPointer::setWidth(int* ptr)
{
	this->ptr = ptr;
}
