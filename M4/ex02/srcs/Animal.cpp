/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 00:46:48 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/09 22:39:29 by mortega-         ###   ########.fr       */
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
