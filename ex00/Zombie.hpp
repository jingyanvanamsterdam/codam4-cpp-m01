/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/21 15:32:24 by jdong         #+#    #+#                 */
/*   Updated: 2026/05/21 15:33:02 by jdong         ########   odam.nl         */
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
		
		Zombie( std::string name );
		~Zombie();
	
	private:
		std::string	name;
		
		Zombie(void);
};

Zombie* newZombie( std:: string name );
void	randomChump( std::string name);

#endif