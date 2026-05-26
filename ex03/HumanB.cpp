/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/21 18:01:24 by jdong         #+#    #+#                 */
/*   Updated: 2026/05/22 13:13:24 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name)
	: name(name)
{
	this->name = name;
	this->weapon = NULL;
	std::cout << GREEN << this->name << " has joined\n" << RESET << std::endl;
}

HumanB::~HumanB()
{
	std::cout << RED << this->name << " left\n" << RESET << std::endl;
}

void	HumanB::attack()
{
	if (this->weapon == NULL)
	{
		std::cout << RED << this->name << " has no weapon yet.\n" << RESET << std::endl;
	}
	else
	{
		std::cout << this->name << " attacts with "
				  << this->weapon->getType() << "\n" << std::endl;
	}
}

void	HumanB::setWeapon(Weapon& type)
{
	this->weapon = &type;
	std::cout << GREEN << this->name << " got a " << this->weapon->getType() << "\n"
			  << RESET << std::endl;
}
