/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:39:51 by mortega-          #+#    #+#             */
/*   Updated: 2022/06/29 22:17:26 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"
#include <iostream>

HumanA::HumanA(void)
{
	_name = "Nobody";
	_weapon = new Weapon("Punches");
}

HumanA::HumanA(std::string name, Weapon & wep)
{
	_name = name;
	_weapon = &wep;
	std::cout << _name << " has \"" << wep.getType() << "\" as his weapon" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

void	HumanA::setWeapon(Weapon & wep)
{
	_weapon = &wep;
	std::cout << _name << " has \"" << wep.getType() << "\" as his weapon" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA is dead" << std::endl;
}
