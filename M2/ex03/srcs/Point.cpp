/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:13:13 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/02 14:06:06 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Point::Point()
{
	_x = Fixed();
	_y = Fixed();
}

Point::Point(const Point & P)
{
	_x = P.getX();
	_y = P.getY();
}

Point::Point(const float f1, const float f2)
{
	_x = Fixed(f1);
	_y = Fixed(f2);
}

Point::~Point(){}

Point Point::operator=(const Point & P)
{
	_x = P.getX();
	_y = P.getY();

	return (*this);
}

Point	Point::operator-(const Point & P)
{
	_x = this->getX() - P.getX();
	_y = this->getY() - P.getY();

	return (*this);
}

bool	Point::operator==(const Point & P) const
{
	if (this->getX() == P.getX() && this->getY() == P.getY())
		return (true);
	return (false);
}

Fixed	Point::getX( void ) const
{
	return (_x);
}

void	Point::setX(const Fixed & f)
{
	_x = f;
}

Fixed	Point::getY( void ) const
{
	return (_y);
}

void	Point::setY(const Fixed & f)
{
	_y = f;
}
