/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:39:51 by mortega-          #+#    #+#             */
/*   Updated: 2022/06/29 22:16:26 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"
#include <iostream>

HumanB::HumanB(void)
{
	_name = "Nobody";
	_armed = false;
}

HumanB::HumanB(std::string name)
{
	_name = name;
	_armed = false;
}

void	HumanB::attack(void)
{
	if (_armed)
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " is unarmed " << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB is dead" << std::endl;
}

void	HumanB::setWeapon(Weapon *wep)
{
	_armed = false;
	_weapon = nullptr;
	if (wep)
	{
		_weapon = wep;
		_armed = true;
		std::cout << _name << " has \"" << wep->getType() << "\" as his weapon" << std::endl;
	}
	else
		std::cout << _name << " has no weapon" << std::endl;
}
