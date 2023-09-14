/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 01:40:09 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/26 14:03:50 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character(std::string name) : _name(name), _index(0) {}

Character::Character(Character & ch)
{
	_name = ch.getName();
	_index = ch.getIndex();
	for (size_t i = 0; i < N; i++)
		_inventory[i] = ch._inventory[i]->clone();
}

Character::~Character()
{
	for (size_t i = 0; i < N; i++)
		if (i < getIndex())
			delete _inventory[i];
}

Character & Character::operator=(Character & ch)
{
	_name = ch.getName();
	_index = ch.getIndex();
	for (size_t i = 0; i < N; i++)
		_inventory[i] = ch._inventory[i]->clone();
	return (*this);
}

std::string const & Character::getName( void ) const { return _name; }

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	if (getIndex() < N)
		_inventory[_index++] = m;
	else
		std::cout << "There is no space in the bag. Buy another :)" << std::endl;
}

void Character::unequip(int fdx)
{
	int	i = -1;
	while (fdx + ++i < N)
	{
		if (fdx + i + 1 == N)
			_inventory[fdx + i] = nullptr;
		else
			_inventory[fdx + i + 1] = _inventory[fdx + i];
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < N)
		_inventory[idx]->use(target);
	else
		std::cout << "There is no such object in the inventory" << std::endl;
}

int const & Character::getIndex( void ) const { return _index; }

void Character::setIndex(int index) { _index = index; }

AMateria **Character::getInventory( void ) { return (_inventory); }
