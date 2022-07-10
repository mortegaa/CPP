/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:00:18 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/10 18:58:09 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("B") , _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name) , _grade(grade) {}

Bureaucrat::~Bureaucrat() {}

std::string const & Bureaucrat::getName( void ) const { return _name; }

unsigned int const & Bureaucrat::getGrade( void ) const { return _grade; }

void Bureaucrat::setGrade(unsigned int grade) { _grade = grade; }

void Bureaucrat::signForm(Form & f)
{
	if (f.beSigned(*this))
		std::cout << "<" << getName() << "> signs <" << f.getName() << ">" << std::endl;
	else
		std::cout << "<" << getName() << "> cannot sign <" << f.getName() << ">" << std::endl;
}

void Bureaucrat::incrementGrade( void )
{
	try{
		if (--_grade < 1)
			throw(GradeTooHighException());
	}
	catch (GradeTooHighException e) { 
		std::cout << "You are fedeado" << std::endl;
		_grade++;
	}
}

void Bureaucrat::decrementGrade( void )
{
	try{
		if (++_grade > 150)
			throw(GradeTooLowException());
	}
	catch (GradeTooLowException e){
		std::cout << "You are a loser" << std::endl;
		_grade--;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() { return ("Grade Too High"); }
const char* Bureaucrat::GradeTooLowException::what() const throw() { return ("Grade Too Low"); }

std::ostream & operator<<(std::ostream & os, Bureaucrat const & obj)
{
	os << "<" << obj.getName() << "> : " << obj.getGrade() << std::endl;
	return os;
}
