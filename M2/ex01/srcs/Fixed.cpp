/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 01:35:31 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/02 08:50:15 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <iostream>
# include <bitset>

Fixed::Fixed(){
	_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	_value = (value << _fBits);
	std::cout << "Parametrized (Int) constructor called" << std::endl;
}

Fixed::Fixed(const float fvalue)
{
	_value = roundf(fvalue * (1 << _fBits));
	std::cout << "Parametrized (Float) constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & F)
{
	std::cout << "Copy constructor called" << std::endl;
	_value = F.getRawBits();
}

Fixed Fixed::operator=(const Fixed & f)
{
	std::cout << "Assignation operator called" << std::endl;
	_value = f.getRawBits();
	return (*this);
}

std::ostream & operator<<(std::ostream &out, const Fixed & F)
{
	out << F.toFloat();
	return (out);
}

int	Fixed::getRawBits( void ) const
{
	return(_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

float	Fixed::toFloat( void ) const
{
	float	ret;
	int		decimals;

	decimals = _value & 255;
	ret = (_value / (1 << _fBits));
	float m = 1;
	for (size_t i = 256; i > 1; i = i / 2)
	{
		if (decimals & i)
			ret = ret + (1 / m);
		m = 2 * m;
	}
	return (ret);
}

int		Fixed::toInt( void ) const
{
	return (_value >> 8);
}
