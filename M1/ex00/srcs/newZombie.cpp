/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:19:46 by mortega-          #+#    #+#             */
/*   Updated: 2022/09/18 10:25:29 by test             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *Z1;

	Z1 = new Zombie();
	Z1->setName(name);
	return (Z1);
}

