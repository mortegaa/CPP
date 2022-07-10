/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 01:40:55 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/02 13:44:12 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Fixed.hpp"
#include "includes/Point.hpp"
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	Point a(0, 0);
	Point b(10, 0);
	Point c(10, 10);
	Point p(2, 2);

	bsp(a, b, c, p);
	return 0;
}
