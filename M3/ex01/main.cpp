/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:09:53 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/02 18:29:19 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ClapTrap.hpp"
#include "includes/ScavTrap.hpp"

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
	return (0);
}
