/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 01:24:02 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/09 10:29:27 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal() { type = "Cat"; std::cout << "A Cat" << std::endl; }

Cat::~Cat() { std::cout << "Cat says bye bye" << std::endl; }

void Cat::makeSound( void ) const
{
	std::cout << "[ Miauu Miaaaauu. Miaaaaaaaauuuuu ]" << std::endl;
}
