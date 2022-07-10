/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:03:16 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/10 19:11:29 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form() : _name("b") , _signed(false) , _signed_grade(1) , _executed_grade(1) {}

Form::Form(std::string name, bool sign, unsigned int sg, unsigned int eg) : _name(name),
																			_signed(sign),
																		   	_signed_grade(sg), 
																			_executed_grade(eg) {}


Form::~Form() {}

std::string const & Form::getName( void ) const { return _name; }
bool const & Form::getSigned( void ) const { return _signed; }
unsigned int const & Form::getSignedGrade( void ) const { return _signed_grade; }
unsigned int const & Form::getExecutedGrade( void ) const { return _executed_grade; }

bool Form::beSigned(Bureaucrat & b)
{
	try{
		if (b.getGrade() > _signed_grade)
			throw(GradeTooLowException());
		else return ((_signed = true));
	}
	catch (GradeTooLowException e) {
		std::cout << "You are unqualified" << std::endl;
	}
	return (false);
}

const char* Form::GradeTooHighException::what() const throw() { return ("Grade Too High"); }
const char* Form::GradeTooLowException::what() const throw() { return ("Grade Too Low"); }

std::ostream & operator<<(std::ostream & os, Form const & obj)
{
	os << "<" << obj.getName() << "> : " << obj.getSigned() << "\t(" << obj.getSignedGrade() << ", " << obj.getExecutedGrade() << ")" << std::endl;
	return os;
}
