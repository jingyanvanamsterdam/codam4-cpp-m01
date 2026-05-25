#include <fstream>
#include <iostream>

std::string	toReplace(std::string s1, std::string s2, std::string line)
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

bool	replace(char *argv[])
{
	std::string	fileName = argv[1];
	std::string	toRep = argv[2];
	std::string	rpword = argv[3];
	std::ifstream	file(fileName);

	if (!file.is_open())
	{
		std::cout << "open file failed" << std::endl;
		return false;
	}

	std::string	newFileName = fileName;
	newFileName += ".replace";

	std::ofstream	newFile(newFileName);

	std::string	line = "";
	while (std::getline(file, line))
	{
		line = toReplace(toRep, rpword, line);
		newFile << line << '\n';
	}

	file.close();
	newFile.close();

	return true;
}