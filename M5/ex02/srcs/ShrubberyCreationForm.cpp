/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:31:43 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/11 21:56:04 by mortega-         ###   ########.fr       */
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
						fs << "	my-app/\
								├─ node_modules/\
								├─ public/\
								│  ├─ favicon.ico\
								│  ├─ index.html\
								│  ├─ robots.txt\
								├─ src/\
								│  ├─ index.css\
								│  ├─ index.js\
								├─ .gitignore\
								├─ package.json\
								├─ README.md" << std::endl;
						return true;
					}
				} catch (GradeTooLowException d) { std::cout << "Unqualified Executor" << std::endl; }
			} 
		} catch (FormNoSignedException f) { std::cout << "Form has not been signed" << std::endl; } // borrar el archivo	 

	fs.close();
	return false;
}
