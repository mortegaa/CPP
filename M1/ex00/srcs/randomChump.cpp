/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:20:56 by mortega-          #+#    #+#             */
/*   Updated: 2022/06/28 22:03:59 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	Zombie *Z1;

	Z1 = newZombie(name);
	Z1->announce();
	delete Z1;
}
