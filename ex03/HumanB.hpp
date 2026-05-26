/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/21 17:59:54 by jdong         #+#    #+#                 */
/*   Updated: 2026/05/22 13:09:23 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
		void	attack();
		void	setWeapon(Weapon& type);
		
		HumanB(std::string name);
		~HumanB();
	
	private:
		std::string	name;
		Weapon		*weapon;
};

#endif