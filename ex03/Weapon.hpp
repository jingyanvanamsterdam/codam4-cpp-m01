/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/21 17:58:47 by jdong         #+#    #+#                 */
/*   Updated: 2026/05/21 18:43:55 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

# define GREEN	"\033[32m"
# define RED	"\033[31m"
# define RESET	"\033[0m"


class Weapon
{
	public:
		const std::string&	getType();
		void				setType( std::string type);

		Weapon(std::string type);
		~Weapon();

	private:
		std::string	type;
};


#endif