/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:05:27 by mortega-          #+#    #+#             */
/*   Updated: 2023/06/04 14:24:01 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <exception>

class NoClassA : public std::exception {
	public:
		virtual const char* what() const throw();
};

class NoClassB : public std::exception {
	public:
		virtual const char* what() const throw();
};

class NoClassC : public std::exception {
	public:
		virtual const char* what() const throw();
};

class NoClassBase : public std::exception {
	public:
		virtual const char* what() const throw();
};


const char* NoClassA::what() const throw() { return("This is not a A class");}
const char* NoClassB::what() const throw() { return("This is not a B class");}
const char* NoClassC::what() const throw() { return("This is not a C class");}
const char* NoClassBase::what() const throw() { return("This is not a Base class"); }

class Base {

	public:
		virtual ~Base() {}
};

#endif
