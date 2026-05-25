#include <iostream>
#include <string>
#include <cctype>
#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n"
			  << "This contains contextual information. "
			  << "They are mostly used for problem diagnosis.\n"
			  << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\n"
			  << "This contains extensive information. "
			  << "They are helpful for tracing program execution in a production environment.\n" 
			  << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n"
			  << "This indicates a potential issue in the system. " 
			  << "However, it can be handled or ignored.\n"
			  << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\n"
			  << "This indicates that an unrecoverable error has occurred. "
			  << "This is usually a critical issue that requires manual intervention.\n"
			  << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	void (Harl::*ptr[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};


	for (size_t j = 0; j < level.length(); j++)
		level[j] = std::toupper(level[j]);

	int	i = 0;
	
	while (i < 4)
	{
		if (levels[i] == level)
			break;
		i++;
	}
	switch(i)
	{
		case 0:
			(this->*ptr[0])();
		case 1:
			(this->*ptr[1])();
		case 2:
			(this->*ptr[2])();
		case 3:
			(this->*ptr[3])();
			break;
		default:
			std::cout << "Check the type of complains: " 
					  << "DEBUG, INFO, WARNING, ERROR\n"
					  << std::endl;
	}
}