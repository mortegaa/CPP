/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:31:43 by mortega-          #+#    #+#             */
/*   Updated: 2023/05/14 17:05:19 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrrubery", false, 145, 137) , _target("HOME") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrrubery", false, 145, 137) , _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string const & ShrubberyCreationForm::getTarget( void ) { return _target; }

void ShrubberyCreationForm::setTarget(std::string & target) { _target = target; }

const char* ShrubberyCreationForm::InvalidFileException::what() const throw() { return ("No valid File"); }

bool ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream fs;
	fs.open(_target + "_shrubbery");

	try { 
		if (!fs.good())
			throw(InvalidFileException());}
		catch ( InvalidFileException e) { std::cout << "Corrupted File" << std::endl; } // borrar el archivo

	try {
		if (getSigned())
			throw(FormNoSignedException());
		else {
			try { 
				if (executor.getGrade() > getExecutedGrade())
					throw(GradeTooLowException());
				else {
						fs << "	my-app/" << std::endl;
						fs << "	├─ node_modules/" << std::endl;
						fs << "	├─ public/" << std::endl;
						fs << "	│  ├─ favicon.ico" << std::endl;
						fs << "	│  ├─ index.html" << std::endl;
						fs << "	│  ├─ robots.txt" << std::endl;
						fs << "	├─ src/" << std::endl;
						fs << "	│  ├─ index.css" << std::endl;
						fs << "	│  ├─ index.js" << std::endl;
						fs << "	├─ .gitignore" << std::endl;
						fs << "	├─ package.json" << std::endl;
						fs << "	├─ README.md" << std::endl;
						return true;
					}
				} catch (GradeTooLowException d) { std::cout << "Unqualified Executor" << std::endl; }
			} 
		} catch (FormNoSignedException f) { std::cout << "Form has not been signed" << std::endl; } 

	fs.close();
	return false;
}
