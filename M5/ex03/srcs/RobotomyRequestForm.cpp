/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp           	                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:31:43 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/12 16:49:05 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy", false, 72, 45) , _target("HOME") {}

RobotomyRequestForm::RobotomyRequestForm(std::string  target) : Form("Robotomy", false, 72, 45) , _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string const & RobotomyRequestForm::getTarget( void ) const { return _target; }

void RobotomyRequestForm::setTarget(std::string & target) { _target = target; }

bool RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try { if (!getSigned()) throw(FormNoSignedException());
		else {
			try { if (executor.getGrade() > getExecutedGrade())
					throw(GradeTooLowException());
				else {
		srand(time(NULL));
	int random = rand() % 2;

	std::cout << "Brrrr BRRRR Brrrrr" << std::endl;
	if (random)
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	return true;}
			} catch (GradeTooLowException d) { std::cout << "Unqualified Executor" << std::endl; }}
		} catch (FormNoSignedException f) { std::cout << "Form has not been signed" << std::endl; }
	return false;
}
