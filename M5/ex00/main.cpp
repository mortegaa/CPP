/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:22:20 by mortega-          #+#    #+#             */
/*   Updated: 2023/05/14 15:56:18 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"

int main( void )
{
	Bureaucrat b("Bob", 25);

	std::cout << b << std::endl;
	b.incrementGrade();
	std::cout << b << std::endl;
	b.decrementGrade();
	std::cout << b << std::endl;

	b.setGrade(150);
	std::cout << b << std::endl;
	b.decrementGrade();
	std::cout << b << std::endl;
	b.setGrade(1);
	std::cout << b << std::endl;
	b.incrementGrade();
	std::cout << b << std::endl;

	std::cout << "Failure test: " << std::endl;
	Bureaucrat f("failure", 252);
	Bureaucrat f2("failure2", 0);
	Bureaucrat f3("failure3", -5);

}
