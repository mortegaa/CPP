/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 02:52:22 by mortega-          #+#    #+#             */
/*   Updated: 2023/09/16 19:34:50 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Span.hpp"

int main( void )
{
	Span s = Span(5);

	s.addNumber(5);
	s.addNumber(3);
	s.addNumber(17);
	s.addNumber(9);
	s.addNumber(11);
	s.addNumber(250);

	std::cout << s.shortestSpan() << std::endl;
	std::cout << s.longestSpan() << std::endl;

	return (0);
}
