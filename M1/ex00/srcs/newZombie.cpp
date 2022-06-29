/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:19:46 by mortega-          #+#    #+#             */
/*   Updated: 2022/06/26 14:13:47 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie	*Zombie::newZombie(std::string name)
{
	Zombie *Z1;

	Z1 = new Zombie();
	Z1->_name = name;
	return (Z1);
}

