/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:22:29 by mortega-          #+#    #+#             */
/*   Updated: 2022/06/28 22:51:05 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
# include <iostream>   ///////////
Zombie	*Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*horde = new Zombie[N];

	for (size_t i = 0; i < N; i++)
	{
		horde[i] = Zombie(name + std::to_string(i));
	}
	return (horde);
}
