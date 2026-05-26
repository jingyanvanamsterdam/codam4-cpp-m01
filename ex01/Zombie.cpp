/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/21 15:36:20 by jdong         #+#    #+#                 */
/*   Updated: 2026/05/21 17:35:14 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
	: name("")
{
	std::cout << "A zombie is made." << std::endl;
}

Zombie::~Zombie()
{
	if (this->name == "")
		std::cout << RED << "A zombie has been destroyed\n" 
				  << RESET << std::endl; 
	else
		std::cout << RED << this->name << " has been destroyed!\n" 
				  << RESET << std::endl;
}

void	Zombie::announce( void )
{
	if (this->name == "")
		std::cout << RED << "The zombie is not named yet!" 
				  << RESET << std::endl;
	else
		std::cout << GREEN << this->name << ": BraiiiiiiinnnzzzZ...\n" 
				  << RESET << std::endl;
}

void	Zombie::setName( std::string name)
{
	this->name = name;
}