/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:00:18 by mortega-          #+#    #+#             */
/*   Updated: 2023/04/03 18:24:19 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("B") , _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name)
{
	try {
		if (grade > 150)
			throw(GradeTooHighException());
	}
	catch (GradeTooHighException e) { std::cout << "You are not even a person" << std::endl; }
	try {
		if (grade < 1)
			throw(GradeTooLowException());
	} catch (GradeTooLowException e) { std::cout << "Who do you think you are?? God??" << std::endl; }
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(Bureaucrat & Br)
{
	this->setGrade(Br.getGrade());
}

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

Bureaucrat & Bureaucrat::operator=(Bureaucrat & Br)
{
	this->setGrade(Br.getGrade());
	return (*this);
}

std::ostream & operator<<(std::ostream & os, Bureaucrat const & obj)
{
	os << "<" << obj.getName() << "> : " << obj.getGrade() << std::endl;
	return os;
}
