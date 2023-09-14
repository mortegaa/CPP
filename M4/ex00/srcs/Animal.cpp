/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 00:46:48 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/26 11:34:27 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << "An animal has arrived" << std::endl;
}

Animal::Animal(Animal & A)
{
	(void)A;
	std::cout << "An animal has a futago" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "An animal has arrived" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal get out" << std::endl;
}

Animal & Animal::operator=(Animal & A)
{
	(void)A;
	std::cout << "An animal has a futago" << std::endl;
	return (A);
}

std::string Animal::getType( void ) const
{
	return (this->type);
}

void Animal::setType(std::string type)
{
	this->type = type;
}

void Animal::makeSound( void ) const { std::cout << "I'm an Animal, but I don't know what I am :(.\nAm I wrong??" << std::endl; }
