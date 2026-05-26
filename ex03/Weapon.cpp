/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/21 18:01:41 by jdong         #+#    #+#                 */
/*   Updated: 2026/05/22 12:59:34 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>

Weapon::Weapon(std::string type)
	: type(type)
{
	std::cout << GREEN << "A weapon is made\n" << RESET << std::endl;
}

Weapon::~Weapon()
{
	std::cout << RED << this->type << " is destroyed!\n" << RESET << std::endl;
}

const std::string&	Weapon::getType()
{
	if (this->type == "")
	{
		std::cout << RED << "No type yet\n" << RESET << std::endl;
	}
	return (this->type);
}

void	Weapon::setType( std::string type )
{
	this->type = type;
	std::cout << GREEN << this->type << " is set\n" << RESET << std::endl;
}