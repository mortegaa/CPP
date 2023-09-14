/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 00:49:27 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/26 13:19:27 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure() : AMateria() {
	_type = "cure";
}

Cure::Cure(Cure & c)
{
	_type = c._type;
}

Cure::~Cure() {}

Cure & Cure::operator=(Cure & c)
{
	this->_type = c._type;
	return (*this);
}

AMateria* Cure::clone( void ) const
{
	return new Cure();
}

void Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
