/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 15:24:04 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/03 16:22:00 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FlagTrap.hpp"

FlagTrap::FlagTrap() : ClapTrap()
{
	setHP(100); setEP(100); setAD(30);
	std::cout << "Un FlagTrap se levanta" << std::endl;
}

FlagTrap::FlagTrap(std::string name) : ClapTrap(name) 
{
	setHP(100); setEP(100); setAD(30);
	std::cout << "Un FlagTrap se levanta" << std::endl;
}

FlagTrap::~FlagTrap()
{
	std::cout << "Es el final del FlagTrap" << std::endl;
}

void	FlagTrap::attack(std::string const & target)
{
	std::cout << getName() << " attacks " << target << " and does " << getAD() << " points of damage" << std::endl;
}

void	FlagTrap::takeDamage(unsigned int amount)
{
	setHP(getHP() - amount);
	std::cout << getName() << " has taken " << amount << " points of damage" << std::endl;
}

void	FlagTrap::beRepaired(unsigned int amount)
{
	setHP(getHP() + amount);
	std::cout << getName() << " has recovered " << amount << " points" << std::endl;
}

void	FlagTrap::highFiveGuys( void )
{
	std::cout << "Let's do a High Fives" << std::endl;
}
