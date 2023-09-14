/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:45:11 by mortega-          #+#    #+#             */
/*   Updated: 2023/01/29 11:19:50 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes/Zombie.hpp"

int main(void)
{
	std::cout << "------------------------------" << std::endl;
	std::cout << "       ZOMBIE MAIN			" << std::endl;
	std::cout << "------------------------------" << std::endl;

	Zombie Z1;
	Z1.announce();

	Zombie *Z2 = new Zombie();
	Z2->announce();

	Zombie *Z3;
	Z3 = newZombie("Ramon");
	Z3->announce();

	randomChump("Delfin");

	delete Z2;
	delete Z3;

	return (0);
}
