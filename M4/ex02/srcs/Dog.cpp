/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 01:24:02 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/09 22:24:35 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal() { type = "Dog"; _brain = new Brain(); std::cout << "A Dog" << std::endl; }

Dog::~Dog() { delete _brain; std::cout << "Dog says bye bye" << std::endl; }

Dog::Dog(Dog & dog)
{
	this->type = dog.type;
	this->_brain = new Brain();
	for (size_t i = 0; i < 100; i++)
		(this->_brain)->_ideas[i] = dog._brain->_ideas[i];
	std::cout << "Deep Copy" << std::endl;
}

Brain* Dog::getBrain( void ) const { return _brain; }

void Dog::setBrain(Brain* brain) { _brain = brain; }

void Dog::makeSound( void ) const
{
	std::cout << "[ Woff Woff. Woff Woff ]" << std::endl;
}
