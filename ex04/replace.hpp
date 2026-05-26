#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>

# define GREEN	"\033[32m"
# define RED	"\033[31m"
# define RESET	"\033[0m"

bool	replace(char *argv[]);
void	errorHandeling(const std::string& mes);

#endif