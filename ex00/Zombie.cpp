/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/20 18:34:59 by jdong         #+#    #+#                 */
/*   Updated: 2026/05/21 15:30:38 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name )
	: name(name)
{}
Zombie::~Zombie()
{
	std::cout << RED << this->name << " has been destroyed!\n" << RESET << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << GREEN << this->name << ": BraiiiiiiinnnzzzZ...\n" << RESET << std::endl;
}