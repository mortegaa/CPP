/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 01:24:02 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/26 12:10:10 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal() { type = "Cat"; _brain = new Brain(); std::cout << "A Cat" << std::endl; }

Cat::Cat(Cat & cat)
{
	this->type = cat.type;
	this->_brain = new Brain();
	for (size_t i = 0; i < 100; i++)
		(this->_brain)->getIdeas()[i] = cat._brain->getIdeas()[i];
	std::cout << "Deep Copy" << std::endl;
}

Cat::~Cat() { delete _brain; std::cout << "Cat says bye bye" << std::endl; }

Cat & Cat::operator=(Cat & cat)
{
	this->type = cat.type;
	this->_brain = new Brain();
	for (size_t i = 0; i < 100; i++)
		(this->_brain)->getIdeas()[i] = cat._brain->getIdeas()[i];
	std::cout << "Operator Deep Copy" << std::endl;
	return (*this);
}

Brain* Cat::getBrain( void ) const { return _brain; }

void Cat::setBrain(Brain* brain) { _brain = brain; }

void Cat::makeSound( void ) const
{
	std::cout << "[ Miauu Miaaaauu. Miaaaaaaaauuuuu ]" << std::endl;
}
