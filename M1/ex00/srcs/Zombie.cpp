/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:46:38 by mortega-          #+#    #+#             */
/*   Updated: 2023/01/29 11:17:07 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void	Zombie::announce()
{
	std::cout << _name + ": BraiiiiiiizzzZ..." << std::endl;
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
