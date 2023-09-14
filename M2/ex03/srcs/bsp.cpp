/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:11:04 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/05 17:59:54 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"
# include <cmath>
# include <iomanip>

static float	moduleVector(const Point & v)
{
	return (sqrt(v.getX().toFloat() * v.getX().toFloat() + v.getY().toFloat() * v.getY().toFloat()));
}

static const Point uniVector(const Point & v)
{
	float module = moduleVector(v);

	float mx = v.getX().toFloat() / module;
	float my = v.getY().toFloat() / module;
	Point p(mx, my);

	return p;
}

static float	dotProduct(const Point & v1, const Point & v2)
{
	return (v1.getX().toFloat() * v2.getX().toFloat() + v1.getY().toFloat() * v2.getY().toFloat());
}

float	area(const Point &v, float h)
{
	float base = moduleVector(v);

	return ((base * h) / 2);
}

float	getH(const Point &a, const Point &b, const Point &P)
{
	Point v1(P - a), v2(b - a);
	Point uni(uniVector(v2));
	float dist;

	dist = dotProduct(v1, v2) / moduleVector(v2);
	Point P2(a.getX().toFloat() + uni.getX().toFloat() * dist, a.getY().toFloat() + uni.getY().toFloat() * dist);
	Point vp(P - P2);

	return (moduleVector(P - P2));
}

bool	bsp(Point const &a, Point const &b, Point const &c, Point const &point)
{
	float	ar1, ar2, ar3, arTotal;

	ar1 = area(b - a, getH(a, b, point));
	std::cout << std::fixed << std::setprecision(1) <<"Area aPb = \t" << ar1 << std::endl;
	ar2 = area(c - b, getH(b, c, point));
	std::cout << "Area bPc = \t" << ar2 << std::endl;
	ar3 = area(a - c, getH(c, a, point));
	std::cout << "Area cPa = \t" << ar3 << std::endl;
	arTotal = area(b - a, getH(a, b, c));
	std::cout << "AreaTotal = \t" << ar1 + ar2 + ar3 << std::endl;
	std::cout << std::endl;
	std::cout << "Area abc = \t" << arTotal << std::endl;

	if (arTotal == 0)
	{
		std::cout << std::endl;
		std::cout << "---\tI think you don't know what a triangle is :/\t---" << std::endl;
		std::cout << std::endl;
		return (false);
	}
	if (ar1 + ar2 + ar3 > arTotal + 0.05f)
		return (false);
	return (true);
}
