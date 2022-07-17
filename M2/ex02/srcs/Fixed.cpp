/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 01:35:31 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/16 20:00:07 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <iostream>
# include <bitset>

Fixed::Fixed(){
	_value = 0;
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	_value = (value << _fBits);
//	std::cout << "Parametrized (Int) constructor called" << std::endl;
}

Fixed::Fixed(const float fvalue)
{
	_value = roundf(fvalue * (1 << _fBits));
//	std::cout << "Parametrized (Float) constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & F)
{
//	std::cout << "Copy constructor called" << std::endl;
	_value = F.getRawBits();
}

Fixed Fixed::operator=(const Fixed & f)
{
//	std::cout << "Assignation operator called" << std::endl;
	_value = f.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed & f)
{
//	std::cout << "Greater-Than operator called" << std::endl;
	if ((*this).getRawBits() > f.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed & f)
{
//	std::cout << "Less-Than operator called" << std::endl;
	if ((*this).getRawBits() < f.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed & f) const
{
//	std::cout << "Greater-Than-Or-Equal operator called" << std::endl;
	if ((*this).getRawBits() >= f.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed & f) const
{
//	std::cout << "Less-Than-or-Equal operiator called" << std::endl;
	if ((*this).getRawBits() <= f.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed & f)
{
//	std::cout << "Equal operator called" << std::endl;
	if ((*this).getRawBits() == f.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed & f)
{
//	std::cout << "Not-Equal operator called" << std::endl;
	if ((*this).getRawBits() != f.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed & f)
{
//	std::cout << "Add operator called" << std::endl;
	_value = (*this).getRawBits() + f.getRawBits();
	return (*this);
}

Fixed	Fixed::operator-(const Fixed & f)
{
//	std::cout << "Substract operator called" << std::endl;
	_value = (*this).getRawBits() - f.getRawBits();
	return (*this);
}

Fixed	Fixed::operator*(const Fixed & f)
{
	float hola;
//	std::cout << "Multiply  operator called" << std::endl;
	_value = ((*this).toFloat() * f.toFloat()) * (1 << _fBits);
	return (*this);
}

Fixed	Fixed::operator/(const Fixed & f)
{
//	std::cout << "Divide operator called" << std::endl;
	_value = ((*this).toFloat() / f.toFloat()) * (1 << _fBits);
	return (*this);
}

Fixed	Fixed::operator++( void )	// Pre-Increment
{
//	std::cout << "Pre-Increment operator called" << std::endl;
	++_value;
	return (*this);
}

Fixed	Fixed::operator++( int )	// Post-Increment
{
//	std::cout << "Post-Increment operator called" << std::endl;
	_value = _value + 1;
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
//	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

float	Fixed::toFloat( void ) const
{
	float	ret;
	int		decimals;

	decimals = _value & 255;
	ret = (_value / (1 << _fBits));
	float m = 1;
	for (size_t i = 256; i >= 1; i = i / 2)
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

Fixed & Fixed::min(Fixed & f1, Fixed & f2)
{
	if (f1.getRawBits() <= f2.getRawBits())
		return (f1);
	return (f2);
}

Fixed & Fixed::max(Fixed & f1, Fixed & f2)
{
	if (f1.getRawBits() >= f2.getRawBits())
		return (f1);
	return (f2);
}

const Fixed & Fixed::min(const Fixed & f1, const Fixed & f2)
{
	if (f1 <= f2)
		return (f1);
	return (f2);
}

const Fixed & Fixed::max(const Fixed & f1, const Fixed & f2)
{
	if (f1 >= f2)
		return (f1);
	return (f2);
}
