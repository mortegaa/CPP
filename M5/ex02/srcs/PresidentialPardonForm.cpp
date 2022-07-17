/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:31:43 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/12 00:09:08 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential", false, 25, 5) , _target("HOME") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential", false, 25, 5) , _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

std::string const & PresidentialPardonForm::getTarget( void ) const { return _target; }

void PresidentialPardonForm::setTarget(std::string & target) { _target = target; }

bool PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try { if (!getSigned()) throw(FormNoSignedException());
		else {
			try { if (executor.getGrade() > getExecutedGrade())
					throw(GradeTooLowException());
				else {
					std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
					return true;}
			} catch (GradeTooLowException d) { std::cout << "Unqualified Executor" << std::endl; }}
		} catch (FormNoSignedException f) { std::cout << "Form has not been signed" << std::endl; }
		return false;
}
