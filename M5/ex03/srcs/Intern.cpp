/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 00:32:13 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/12 17:29:54 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Form* Intern::makeForm(std::string nameForm, std::string targetForm)
{
	int code;
	Form* f;
	
	code = nameForm == Shru ? 1 : nameForm == Robo ? 2 : nameForm == Presi ? 3 : 0;

	switch (code)
	{
		case 1:
			f = new ShruM(targetForm);
			break ;
		case 2:
			f = new RoboM(targetForm);
			break ;
		case 3:
			f = new PresiM(targetForm);
			break ;
		default:
			std::cout << "Form not Known" << std::endl;
			f = new Form("default", false, 150, 150);
			break ;
	}
	std::cout << "Intern creates <" << f->getName() << ">" << std::endl;
	return f;
}
