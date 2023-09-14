/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:13:08 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/01 22:05:37 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("NPC"), _HP(10), _EP(10), _AD(0)
{
	std::cout << "ClapTrap " << _name << " has born!!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap & Cl)
{
	this->_name = Cl._name;
	this->_HP = Cl._HP;
	this->_EP = Cl._EP;
	this->_AD = Cl._AD;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _HP(10), _EP(10), _AD(0)
{
	std::cout << "ClapTrap " << _name << " has born!!" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << _name << " has died" << std::endl;
}

ClapTrap ClapTrap::operator=(ClapTrap & Cl)
{
	this->_name = Cl._name;
	this->_HP = Cl._HP;
	this->_EP = Cl._EP;
	this->_AD = Cl._AD;

	return (*this);
}

std::string		ClapTrap::getName( void ){ return (_name); }
unsigned int	ClapTrap::getHP( void ){ return (_HP); }
unsigned int	ClapTrap::getEP( void ){ return (_EP); }
unsigned int	ClapTrap::getAD( void ){ return (_AD); }

void	ClapTrap::setName(std::string name){ _name = name; }
void	ClapTrap::setHP(unsigned int amount){ _HP = amount; }
void	ClapTrap::setEP(unsigned int amount){ _EP = amount; }
void	ClapTrap::setAD(unsigned int amount){ _AD = amount; }

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _AD << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	// Cuidado con los max int and min int y esas cosas
	if (_HP - amount < 0)
		_HP = 0;
	else
		_HP -= amount;
	std::cout << "ClapTrap " << _name << " has taken " << amount << " points of damage. AAHHGG!!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	_HP += amount;
	std::cout << "ClapTrap " << _name << " has recovered " << amount << " points of health. Uyyy!!" << std::endl;

}
