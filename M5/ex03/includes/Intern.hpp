/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 00:17:36 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/12 17:09:12 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <string>

# define Shru "ShrubberyCreationForm"
# define Robo "RobotomyRequestForm"
# define Presi "PresidentialPardonForm"

# define ShruM ShrubberyCreationForm
# define RoboM RobotomyRequestForm
# define PresiM PresidentialPardonForm


typedef Form *(*t_form)(std::string target);

class Intern {

	public:
		Intern();
		~Intern();
		Form* makeForm(std::string nameForm, std::string targetForm);
};

#endif
