#pragma once
#include "FileReader.h"
#include "FileWriter.h"
class FileIO : public FileReader, public FileWriter
{
public:
	FileIO(string fileName) : FileReader(fileName), FileWriter(fileName)
	{

	}
};

