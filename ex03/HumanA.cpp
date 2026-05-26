/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/21 18:00:34 by jdong         #+#    #+#                 */
/*   Updated: 2026/05/22 13:13:16 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string name, Weapon& type)
	: name(name),
	  weapon(type)
{
	std::cout << GREEN << this->name << " has joined\n" << RESET << std::endl;
}

HumanA::~HumanA()
{
	std::cout << RED << this->name << " has left.\n" << RESET << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacts with "
			  << this->weapon.getType() << "\n" << std::endl;
}
