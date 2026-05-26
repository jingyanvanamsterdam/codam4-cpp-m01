/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/21 15:34:42 by jdong         #+#    #+#                 */
/*   Updated: 2026/05/21 17:33:53 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

# define GREEN	"\033[32m"
# define RED	"\033[31m"
# define RESET	"\033[0m"

class Zombie
{
	public:
		void	announce( void );
		void	setName( std::string name);
		
		Zombie();
		~Zombie();
	
	private:
		std::string	name;
};

Zombie* zombieHorde( int N, std::string name);

#endif