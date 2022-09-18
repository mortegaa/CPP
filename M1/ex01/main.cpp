/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:45:11 by mortega-          #+#    #+#             */
/*   Updated: 2022/09/18 11:54:26 by test             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes/Zombie.hpp"

int main(void)
{
	Zombie Z1 = Zombie("zombie Padre");
	Z1.announce();

	Zombie *Z2 = zombieHorde(10, "zombieHijo");

	for (size_t i = 0; i < 10; i++)
		Z2[i].announce();

	std::cout << std::endl << "Sayonara Baby" << std::endl << std::endl;
	
	delete [] Z2;

	return (0);
}
