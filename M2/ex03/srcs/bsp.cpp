/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:11:04 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/02 14:06:04 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"
# include <cmath>


static float	moduleVector(const Point & v)
{
	return (sqrt(v.getX().toFloat() * v.getX().toFloat() + v.getY().toFloat() * v.getY().toFloat()));
}

static float	dotProduct(const Point & v1, const Point & v2)
{
	return (v1.getX().toFloat() * v2.getX().toFloat() + v1.getY().toFloat() * v2.getY().toFloat());
}

static float angle(const Point & v1, const Point & v2)
{
	float num;
	float den;

	num = dotProduct(v1, v2);
	den = moduleVector(v1) * moduleVector(v2);

	return (num / den);
}

static const Point & nearestVert(Point const & a, Point const & b, Point const & c, Point const & P)
{
	float m1 = moduleVector(P - a);
	float m2 = moduleVector(P - b);
	float m3 = moduleVector(P - c);

	if (m1 <= m2 && m1 <= m3)
		return (a);
	else if (m2 <= m3)
		return (b);
	return (c);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point	v1, v2;
	float	an;

	const Point vert = nearestVert(a, b, c, point);
	if (a == vert){
		v1 = b - vert; v2 = c - vert;
	}
	else if (b == vert){
		v1 = a - vert; v2 = c - vert;
	}
	else if (c == vert){
		v1 = a - vert; v2 = b - vert;
	}
	an = angle(v1, v2);
	std::cout << an << std::endl;
	return (false);
}
