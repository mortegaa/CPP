/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:32:36 by mortega-          #+#    #+#             */
/*   Updated: 2023/04/04 18:34:24 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

# include "Form.hpp"

class Form;

class Bureaucrat {

	private:
		std::string const	_name;
		unsigned int		_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat & Br);
		~Bureaucrat();
		std::string const & getName( void ) const;
		unsigned int const & getGrade( void ) const;
		void setGrade(unsigned int grade);
		void signForm(Form & f);
		void incrementGrade( void );
		void decrementGrade( void );
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		Bureaucrat & operator=(Bureaucrat & Br);
};

std::ostream & operator<<(std::ostream & os, Bureaucrat const & obj);

#endif
