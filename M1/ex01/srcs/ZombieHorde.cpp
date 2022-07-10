/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:22:29 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/10 19:27:12 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*horde = new Zombie[N];

	for (size_t i = 0; i < N; i++)
		horde[i].setName(name + std::to_string(i));
	return (horde);
}
