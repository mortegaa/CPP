/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 01:24:02 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/25 21:19:22 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{ 
	type = "WrongCat";
	std::cout << "A WrongCat" << std::endl;
}

WrongCat::WrongCat(WrongCat & WC)
{
	this->type = WC.getType();
}

WrongCat::~WrongCat() { std::cout << "WrongCat says bye bye" << std::endl; }

WrongCat & WrongCat::operator=(WrongCat & WC)
{
	this->type = WC.getType();
	return (*this);
}

