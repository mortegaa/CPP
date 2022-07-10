/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 00:02:57 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/10 14:20:12 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria() : _type("---") {};

AMateria::~AMateria() {}

AMateria::AMateria(std::string const & type) : _type(type) {}

std::string const & AMateria::getType( void ) const { return _type; }

void AMateria::setType(std::string type) { _type = type; }

void	AMateria::use(ICharacter & target) {}


