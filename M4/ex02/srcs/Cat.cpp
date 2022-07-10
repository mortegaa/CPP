/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 01:24:02 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/09 22:24:12 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal() { type = "Cat"; _brain = new Brain(); std::cout << "A Cat" << std::endl; }

Cat::Cat(Cat & cat)
{
	this->type = cat.type;
	this->_brain = new Brain();
	for (size_t i = 0; i < 100; i++)
		(this->_brain)->_ideas[i] = cat._brain->_ideas[i];
	std::cout << "Deep Copy" << std::endl;
}

Cat::~Cat() { delete _brain; std::cout << "Cat says bye bye" << std::endl; }

Brain* Cat::getBrain( void ) const { return _brain; }

void Cat::setBrain(Brain* brain) { _brain = brain; }

void Cat::makeSound( void ) const
{
	std::cout << "[ Miauu Miaaaauu. Miaaaaaaaauuuuu ]" << std::endl;
}
