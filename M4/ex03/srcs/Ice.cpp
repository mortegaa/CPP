/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 00:20:42 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/26 13:23:23 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice() : AMateria() {
	_type = "ice";
}

Ice::Ice(Ice & i)
{
	this->_type = i._type;
}

Ice::~Ice() {}

Ice & Ice::operator=(Ice & i)
{
	this->_type = i._type;
	return (*this);
}

AMateria* Ice::clone( void ) const
{
	return new Ice;
}

void Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
