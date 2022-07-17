/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:03:16 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/11 23:57:07 by mortega-         ###   ########.fr       */
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
const char* Form::FormNoSignedException::what() const throw() { return ("Form is not Signed"); }

bool Form::execute(Bureaucrat const & executor) const
{
	try { if (!getSigned()) throw(FormNoSignedException());
		else{ try { if (getExecutedGrade() < executor.getGrade()) throw(GradeTooLowException());
			else {
				std::cout << "I'm doing something. Don't disturb me Please" << std::endl;
				return true;}} catch (GradeTooLowException d) { std::cout << "Executor " << executor.getName() << " is no qualified to execute " << getName() << " form" << std::endl; }
		}
	} catch (FormNoSignedException e) { std::cout << getName() << " has not been signed" << std::endl;}
	return false;
}

std::ostream & operator<<(std::ostream & os, Form const & obj)
{
	os << "<" << obj.getName() << "> : " << obj.getSigned() << "\t(" << obj.getSignedGrade() << ", " << obj.getExecutedGrade() << ")" << std::endl;
	return os;
}
