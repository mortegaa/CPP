/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:46:38 by mortega-          #+#    #+#             */
/*   Updated: 2022/09/18 10:30:03 by test             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void	Zombie::announce()
{
	std::cout << "< " + _name + " > BraiiiiiiizzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
	_name = "Zomby";
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << _name << " was killed" << std::endl;
}

std::string Zombie::getName( void )
{
	return (this->_name);
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}
