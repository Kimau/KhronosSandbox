#include "FileIO.h"

#include <fstream>

bool FileIO::readFileIntroString(std::string& output, const std::string& filename)
{
	std::ifstream file(filename, std::ios::ate | std::ios::binary);
	if (!file.is_open())
	{
		return false;
	}

	size_t fileSize = static_cast<size_t>(file.tellg());

	output.resize(fileSize);
	file.seekg(0);
	file.read(&output[0], fileSize);
	file.close();

	return true;
}
