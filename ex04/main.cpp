#include <iostream>
#include <fstream>
#include <string>
#include "replace.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "input error" << std::endl;
		return 1;
	}

	if (!replace(argv))
		return 1;
	return 0;
}