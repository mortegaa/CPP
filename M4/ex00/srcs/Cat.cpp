/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 01:24:02 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/25 20:51:40 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal() { type = "Cat"; std::cout << "A Cat" << std::endl; }

Cat::Cat(Cat & C)
{
	this->type = C.getType();
}

Cat::~Cat() { std::cout << "Cat says bye bye" << std::endl; }

Cat & Cat::operator=(Cat & C)
{
	this->type = C.getType();
	return (*this);
}

void Cat::makeSound( void ) const
{
	std::cout << "[ Miauu Miaaaauu. Miaaaaaaaauuuuu ]" << std::endl;
}
