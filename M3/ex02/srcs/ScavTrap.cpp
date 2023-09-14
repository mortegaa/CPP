/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:26:19 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/01 22:16:54 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	setHP(100); setEP(50); setAD(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
	setHP(100); setEP(50); setAD(20);
}

ScavTrap::ScavTrap(ScavTrap & Sc)
{
	this->setName(Sc.getName());
	this->setHP(Sc.getHP());
	this->setEP(Sc.getEP());
	this->setAD(Sc.getAD());
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap ha sido devuelto a la tierra" << std::endl;
}

ScavTrap ScavTrap::operator=(ScavTrap & Sc)
{
	this->setName(Sc.getName());
	this->setHP(Sc.getHP());
	this->setEP(Sc.getEP());
	this->setAD(Sc.getAD());

	return (*this);
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << getName() << " used his neutron cannon" << std::endl;
	std::cout << target << " has suffered a damage of " << getAD() << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap armor has been trespassed" << std::endl;
	//std::cout << "Veamos: " << getHP() << "\t" << amount << "\t" << getHP() - amount << std::endl;
	setHP(getHP() - amount);
	std::cout << getName() << " has " << getHP() << " left" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap is recovering" << std::endl;
	setHP( getHP() + amount );
	std::cout << getName() << " has " << getHP() << " of healthy points now" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap is known as the Gate Keeper" << std::endl;
	std::cout << "He protects the Gate of his home. He is the first line of defense" << std::endl;
}
