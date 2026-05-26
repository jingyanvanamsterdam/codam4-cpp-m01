/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/21 17:59:27 by jdong         #+#    #+#                 */
/*   Updated: 2026/05/22 13:02:40 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
		void	attack();
		
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
	
	private:
		std::string	name;
		Weapon&		weapon;
		
		HumanA(void);
};

#endif