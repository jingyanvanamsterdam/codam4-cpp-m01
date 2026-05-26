/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/21 15:31:58 by jdong         #+#    #+#                 */
/*   Updated: 2026/05/21 15:32:00 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie* new_zombie = newZombie("Real Zombie");
	
	new_zombie->announce();

	randomChump("Random Zombie");

	delete new_zombie;

	return 0;
}