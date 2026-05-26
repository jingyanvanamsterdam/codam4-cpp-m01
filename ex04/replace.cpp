#include <fstream>
#include <iostream>
#include "replace.hpp"

static std::string	toReplace(std::string s1, std::string s2, std::string line)
{
	size_t		pos = 0;

	if (s1.empty())
		return line;

	while ((pos = line.find(s1, pos)) != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos += s2.length();
	}
	return line;
}

void	errorHandeling(const std::string& mes)
{
	std::cout << RED << mes << RESET;
}

bool	replace(char *argv[])
{
	std::string		fileName = argv[1];
	std::string		toRep = argv[2];
	std::string		rpWord = argv[3];
	std::ifstream	file(argv[1]);

	if (!file.is_open())
	{
		errorHandeling("open file failed.\n");
		return false;
	}

	std::string	newFileName = fileName;
	newFileName += ".replace";

	std::ofstream	newFile(newFileName.c_str());

	std::string	line = "";
	while (std::getline(file, line))
	{
		line = toReplace(toRep, rpWord, line);
		newFile << line << '\n';
	}

	file.close();
	newFile.close();

	return true;
}