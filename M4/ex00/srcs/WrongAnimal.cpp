/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 00:46:48 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/09 10:11:11 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	std::cout << "An shiny animal has arrived" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "An shiny animal has arrived" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Shiny WrongAnimal get out" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return (this->type);
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

void WrongAnimal::makeSound( void ) const { std::cout << "Soy un puto WrongAnimal Shiny" << std::endl; }
