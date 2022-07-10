/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 21:49:32 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/08 23:27:09 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	setHP(100); setEP(50); setAD(30);
//	ClapTrap::_name = "NPC_clap_name";
	std::cout << "A DiamondTrap " << getName() << " has arrived to the city" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	setHP(100); setEP(50); setAD(30);
//	ClapTrap::_name = name + "_clap_name";
	std::cout << "A DiamondTrap " << getName() << " has arrived to the city" << std::endl;
}

DiamondTrap::~DiamondTrap(){ std::cout << "DDestructor" << std::endl; }

void DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << getName() << " has received " << amount << " of damage" << std::endl;
	setHP(getHP() - amount);
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	std::cout << getName() << " has been healed!! +" << amount << "HP" << std::endl;
	setHP(getHP() + amount);
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "My name is " << getName() << std::endl;
//	std::cout << "My ClapTrap name is " << ClapTrap::_name << std::endl;
}
