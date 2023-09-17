/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:47:49 by mortega-          #+#    #+#             */
/*   Updated: 2023/09/16 20:28:21 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <cmath>
# include <limits>

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

		template <typename InputIt>
		void addRange(InputIt begin, InputIt end)
		{
			while (begin != end)
			{
				addNumber(*begin);
				begin++;
			}
		}

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
