/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:47:49 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/16 02:59:34 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <cmath>

class Span {

	private:
		int *_store;
		unsigned int _size;
		unsigned int _index;

	public:
		Span();
		Span(unsigned int size);
		~Span();
		void addNumber(int num);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		class MaxNumberException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class NoNumberException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

#endif
