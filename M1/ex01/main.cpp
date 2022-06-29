/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:45:11 by mortega-          #+#    #+#             */
/*   Updated: 2022/06/28 22:51:07 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes/Zombie.hpp"

int main(void)
{
	Zombie Z1 = Zombie("zombie Padre");
	Z1.announce();

	Zombie *Z2 = Z1.zombieHorde(10, "zombieHijo");

	for (size_t i = 0; i < 10; i++)
		Z2[i].announce();

	std::cout << std::endl << "Sayonara Baby" << std::endl << std::endl;
	
	delete [] Z2;

	return (0);
}
