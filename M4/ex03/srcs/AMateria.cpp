/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 00:02:57 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/26 13:05:33 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria() : _type("---") {};

AMateria::AMateria(AMateria & M)
{
	this->_type = M._type;
}

AMateria::~AMateria() {}

AMateria & AMateria::operator=(AMateria & M)
{
	this->_type = M._type;
	return(*this);
}

AMateria::AMateria(std::string const & type) : _type(type) {}

std::string const & AMateria::getType( void ) const { return _type; }

void AMateria::setType(std::string type) { _type = type; }

void	AMateria::use(ICharacter & target) {}


