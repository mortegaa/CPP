/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:46:38 by mortega-          #+#    #+#             */
/*   Updated: 2022/04/19 08:13:56 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << "<" + _name + "> BraiiiiiiizzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
	_name = "Zomby";
}

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zommbie::~Zomie(void)
{
	std::cout << "Zombie killed" << std::endl;
}
