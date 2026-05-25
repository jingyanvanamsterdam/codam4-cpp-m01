#include <iostream>
#include "Harl.hpp"

int main(void)
{
	Harl debug;
	Harl info;
	Harl warning;
	Harl error;
	Harl wrong;
	Harl empty;

	debug.complain("debug");
	wrong.complain("wrong");
	info.complain("info");
	warning.complain("Warning");
	error.complain("ERROR");
	empty.complain("");
}