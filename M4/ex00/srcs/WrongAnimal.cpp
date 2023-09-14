/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 00:46:48 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/26 11:01:10 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	std::cout << "An shiny animal has arrived" << std::endl;
}


WrongAnimal::WrongAnimal(WrongAnimal & WA)
{
	this->type = WA.getType();
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "An shiny animal has arrived" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Shiny WrongAnimal get out" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal & WA)
{
	this->type = WA.getType();
	return (*this);
}

std::string WrongAnimal::getType( void ) const
{
	return (this->type);
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

void WrongAnimal::makeSound( void ) const { std::cout << "I'm a WrongAnimal Shiny" << std::endl; }
