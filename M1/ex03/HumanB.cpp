/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:39:51 by mortega-          #+#    #+#             */
/*   Updated: 2022/04/19 12:33:46 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
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

void	HumanB::setWeapon(Weapon & wep)
{
	_weapon = &wep;
	_armed = true;
}
