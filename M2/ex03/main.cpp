/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 01:40:55 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/05 18:00:24 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Fixed.hpp"
#include "includes/Point.hpp"
#include <iostream>

bool	bsp(Point const &a, Point const &b, Point const &c, Point const &point);

int main( void )
{
	Point a(0, 0);
	Point b(0, 10);
	Point c(10, 10);
	Point p(2, 2);

	std::cout << "a.x =  " << a.getX() << "\ta.y =  " << a.getY() << std::endl;
    std::cout << "b.x =  " << b.getX() << "\tb.y =  " << b.getY() << std::endl;
    std::cout << "c.x =  " << c.getX() << "\tc.y =  " << c.getY() << std::endl;
    std::cout << "P.x =  " << p.getX() << "\tP.y =  " << p.getY() << std::endl;
	
	std::cout << "*******************************************" << std::endl;
	std::cout << "**    Point P is inside the triangle??   **" << std::endl;
	std::cout << "*******************************************" << std::endl;
	std::cout << std::endl;
	if (bsp(a, b, c, p))
	{
		std::cout << "------------------------------------------" << std::endl;
		std::cout << "\t\tInside" << std::endl;
		std::cout << "------------------------------------------" << std::endl;
	} else {
		std::cout << "------------------------------------------" << std::endl;
		std::cout << "\t\tOutside" << std::endl;
		std::cout << "------------------------------------------" << std::endl;
	}

	return 0;
}
