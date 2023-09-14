/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:13:13 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/05 16:57:57 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const Point & P) : _x(P._x), _y(P._y) {}

Point::Point(const float f1, const float f2) : _x(f1), _y(f2) {}

Point::~Point(){
//	std::cout << "Se acabó el punto" << std::endl;
}


Point Point::operator=(const Point & P) const
{
	(void)P;
	return (*this);
}

const Point Point::operator-(const Point & P) const
{
	Point p(this->getX().toFloat() - P.getX().toFloat(), this->getY().toFloat() - P.getY().toFloat());
	return p;
}

bool	Point::operator==(const Point & P) const
{
	if (this->_x == P._x && this->_y == P._y)
		return (true);
	return (false);
}

Fixed Point::getX( void ) const
{
	return (this->_x);
}

Fixed Point::getY( void ) const
{
	return (this->_y);
}
