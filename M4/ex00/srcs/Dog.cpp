/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 01:24:02 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/25 20:53:25 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal() { type = "Dog"; std::cout << "A Dog" << std::endl; }

Dog::Dog(Dog & D)
{
	this->type = D.getType();
}

Dog::~Dog() { std::cout << "Dog says bye bye" << std::endl; }

Dog & Dog::operator=(Dog & D)
{
	this->type = D.getType();
	return (*this);
}

void Dog::makeSound( void ) const
{
	std::cout << "[ Woff Woff. Woff Woff ]" << std::endl;
}
