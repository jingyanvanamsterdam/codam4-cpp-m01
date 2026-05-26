/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/21 15:35:59 by jdong         #+#    #+#                 */
/*   Updated: 2026/05/21 17:44:02 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <vector>
#include <string>
#include <sstream>
#include <iostream>

Zombie* zombieHorde( int N, std::string name)
{
	std::vector<std::string>	names(N);
	std::ostringstream			oss;

	if (N < 1)
	{
		std::cout << RED << "Cannot create a horde with less than one zombie!\n" 
				  << RESET << std::endl;
		return (NULL);		
	}

	Zombie* horde = new Zombie[N];

	if (!horde)
	{
		std::cout << RED << "Failed to allocate horde.\n" 
				  << RESET << std::endl;
		return (NULL);				
	}

	for (int i = 0; i < N; i++)
	{
		oss.str("");
		oss << i;
		horde[i].setName(name + oss.str());
	}
	
	return horde;
}