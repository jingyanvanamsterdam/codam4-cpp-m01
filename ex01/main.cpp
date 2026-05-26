/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/21 15:34:24 by jdong         #+#    #+#                 */
/*   Updated: 2026/05/21 17:43:30 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie* horde;
	int		amount;

	amount = 5;
	horde = zombieHorde(amount, "zombie");
	if (!horde)
		return (1);
	
	for (int i = 0; i < amount; i++)
		horde[i].announce();

	delete[] horde;

	return 0;
}