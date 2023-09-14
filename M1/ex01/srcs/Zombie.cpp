/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:46:38 by mortega-          #+#    #+#             */
/*   Updated: 2023/01/29 11:36:14 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <iostream>

void	Zombie::announce( void )
{
	std::cout << _name + ": BraiiiiiiizzzZ..." << std::endl;
}

Zombie::Zombie( void )
{
	_name = "Zomby";
}

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie " << _name  << " was killed" << std::endl;
}

std::string const & Zombie::getName( void ) const { return _name; }

void Zombie::setName(std::string name) { _name = name; }
