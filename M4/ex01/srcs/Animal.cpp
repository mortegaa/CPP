/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 00:46:48 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/09 01:56:34 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << "An animal has arrived" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "An animal has arrived" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal get out" << std::endl;
}

std::string Animal::getType( void ) const
{
	return (this->type);
}

void Animal::setType(std::string type)
{
	this->type = type;
}

void Animal::makeSound( void ) const { std::cout << "Soy un puto Animal" << std::endl; }
