/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:22:20 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/12 17:30:53 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Form.hpp"
#include "includes/Bureaucrat.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include "includes/Intern.hpp"

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
	ShrubberyCreationForm Sh("SCF");
	b.executeForm(Sh);
	RobotomyRequestForm Rob("RRF");
	b.signForm(Rob);
	b.executeForm(Rob);
	PresidentialPardonForm Press("PPF");
	b.setGrade(1);
	b.signForm(Press);
	b.executeForm(Press);

	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "		INTERN TEST	    					 " << std::endl;
	std::cout << "-------------------------------------------" << std::endl;

	Intern	someRandomIntern;
	Form*	rrf;

	rrf = someRandomIntern.makeForm("RobotomyRquestForm", "Bender");

	std::cout << *rrf << std::endl;
	b.signForm(*rrf);
	std::cout << *rrf << std::endl;
	b.executeForm(*rrf);

	delete rrf;
}
