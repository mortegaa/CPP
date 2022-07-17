/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:22:20 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/12 00:08:44 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Form.hpp"
#include "includes/Bureaucrat.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/PresidentialPardonForm.hpp"

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

	b.setGrade(19);
	Form f("Formulario", false, 20, 2);
	std::cout << f << std::endl;
	b.signForm(f);
	std::cout << f << std::endl;

	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "		FUNCTIONAL FORMS TEST				 " << std::endl;
	std::cout << "-------------------------------------------" << std::endl;

	b.executeForm(f);
	ShrubberyCreationForm Shru("SCF");
	b.executeForm(Shru);
	RobotomyRequestForm Robo("RRF");
	b.signForm(Robo);
	b.executeForm(Robo);
	PresidentialPardonForm Presi("PPF");
	b.setGrade(1);
	b.signForm(Presi);
	b.executeForm(Presi);


}
