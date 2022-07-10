/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:22:20 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/10 19:10:27 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Form.hpp"
#include "includes/Bureaucrat.hpp"

int main( void )
{
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "		BUREAUCRAT TEST						 " << std::endl;
	std::cout << "-------------------------------------------" << std::endl;

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

	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "		FORM TEST							 " << std::endl;
	std::cout << "-------------------------------------------" << std::endl;

	b.setGrade(25);
	Form f("Formulario", false, 20, 2);
	std::cout << f << std::endl;
	b.signForm(f);
}
