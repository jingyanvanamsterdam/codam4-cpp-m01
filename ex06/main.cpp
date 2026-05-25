#include <iostream>
#include "Harl.hpp"

int main(int argc, char *argv[])
{
	if (argc <= 1 || argc > 2)
	{
		std::cout << "Run program like this: ./harlFilter \"WARNING\""
				  << std::endl;
		return 1;
	}

	Harl	mes;

	mes.complain(argv[1]);
}