/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 01:35:31 by mortega-          #+#    #+#             */
/*   Updated: 2022/04/24 02:02:49 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){}
Fixed::~Fixed(){}

Fixed::Fixed(Fixed & F)
{
	_value = F._value;
	_fBits = F._fBits;
}

Fixed & Fixed::operator=(Fixed & f)
{
	_value = f._value;
	_fBits = f._fBits;
}

int	Fixed::getRawBits(void) const
{
	return(_fBits);
}

void	Fixed::setRawBits(int const raw)
{
	_fBits = raw;
}
