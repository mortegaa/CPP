/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:45:00 by mortega-          #+#    #+#             */
/*   Updated: 2023/04/04 19:11:56 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:
		const std::string	_name;
		bool				_signed;
		const unsigned int _signed_grade;
		const unsigned int _executed_grade;

	public:
		Form();
		Form(std::string name, bool sing, unsigned int sg, unsigned int eg);
		Form(Form & form);
		~Form();
		std::string const & getName( void ) const;
		bool const & getSigned( void ) const;
		unsigned int const & getSignedGrade( void ) const;
		unsigned int const & getExecutedGrade( void ) const;
		bool beSigned(Bureaucrat & b);
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		Form & operator=(Form & form);
};

std::ostream & operator<<(std::ostream & os, Form const & f);

#endif
