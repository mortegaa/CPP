/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:09:53 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/03 16:20:27 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ClapTrap.hpp"
#include "includes/ScavTrap.hpp"
#include "includes/FlagTrap.hpp"

int	main( void )
{
	ClapTrap p1;

	p1.attack("morsa");
	p1.takeDamage(7);
	p1.beRepaired(3);

	ScavTrap s1;
	s1.attack("NPC");
	s1.takeDamage(12);
	s1.beRepaired(8);
	s1.guardGate();

	FlagTrap f("Asumin");
	f.attack("morsa");
	f.takeDamage(23);
	f.beRepaired(17);
	f.highFiveGuys();
	return (0);
}
