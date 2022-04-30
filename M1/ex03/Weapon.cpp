/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:29:06 by mortega-          #+#    #+#             */
/*   Updated: 2022/04/19 12:24:42 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

std::string const & Weapon::getType(void)
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

Weapon::Weapon()
{
	_type = "nothing";
}

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon()
{
	std::cout << "Weapon desapaired" << std::endl;
}
