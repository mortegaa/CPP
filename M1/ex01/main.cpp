/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:45:11 by mortega-          #+#    #+#             */
/*   Updated: 2023/01/29 11:35:35 by mortega-         ###   ########.fr       */
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
