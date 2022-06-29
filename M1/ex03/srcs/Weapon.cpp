/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:29:06 by mortega-          #+#    #+#             */
/*   Updated: 2022/06/29 22:16:47 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
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
	std::cout << "Weapon \"" << _type  << "\" desapaired" << std::endl;
}
