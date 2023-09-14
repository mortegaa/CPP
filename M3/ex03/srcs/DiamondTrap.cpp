/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 21:49:32 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/25 20:12:11 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	setStats(*this);
	DiamondTrap::_name = "NPC";
	setName("NPC_clap_name");
	std::cout << "A DiamondTrap " << getName() << " has arrived to the city" << std::endl;
}

DiamondTrap::DiamondTrap(std::string actualName) : ClapTrap(actualName + "_clap_name")
{
	setStats(*this);
	DiamondTrap::_name = actualName;
	std::cout << "A DiamondTrap " << getName() << " has arrived to the city" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap & Dm)
{
	this->setName(Dm.getName());	
	this->setActualName(Dm.getActualName());
	this->setHP(Dm.getHP());
	this->setEP(Dm.getEP());
	this->setAD(Dm.getAD());
}

DiamondTrap::~DiamondTrap(){ std::cout << "Destructor" << std::endl; }

DiamondTrap DiamondTrap::operator=(DiamondTrap & Dm)
{
	this->setName(Dm.getName());
	this->setActualName(Dm.getActualName());
	this->setHP(Dm.getHP());
	this->setEP(Dm.getEP());
	this->setAD(Dm.getAD());

	return (*this);
}

void DiamondTrap::setActualName(std::string actualName) { DiamondTrap::_name = actualName; }

std::string DiamondTrap::getActualName( void ) { return(DiamondTrap::_name); }

void setStats(DiamondTrap & D)
{
	FlagTrap F;
	ScavTrap S;

	D.setHP(F.getHP());
	D.setEP(S.getEP());
	D.setAD(F.getAD());
}

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
	std::cout << "My name is " << getActualName() << std::endl;
	std::cout << "My ClapTrap name is " << getName() << std::endl;
}
