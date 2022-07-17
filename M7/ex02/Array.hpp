/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:55:19 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/12 20:53:15 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T> class Array
{
	private:
		T*			_array;
		std::size_t	_size;

	public:
		Array() { _array = new T[0]; _size = 0; }
		Array( unsigned int n) {
			_size = n;
			_array = new T[n];
			for (std::size_t i = 0; i < n; i++)
				_array[i] = T();
		}
		~Array() { delete [] _array; }
		Array(Array const & array){
			_size = array.size();
			_array = new T[array.size()];
			for (std::size_t i = 0; i < _size; i++)
				_array[i] = array[i];
		}
		Array const & operator=(Array const & array){
			_size = array.size();
			_array = new T[array.size()];
			for (std::size_t i = 0; i < _size; i++)
				_array[i] = array[i];
			return (*this);
		}
		T & operator[](std::size_t index)
		{
			try {
				if (index >= _size || index < 0) { throw(IndexOutOfLimitsException()); }
				else { return _array[index]; }
			} catch (IndexOutOfLimitsException e)
			{std::cout << "Array index out of limits, bye bye" << std::endl; exit(0); }
		}
		class IndexOutOfLimitsException : public std::exception {
			virtual const char* what() const throw() { return "Index Out of Limits"; };
		};
		std::size_t size( void ) { return _size; }
};

#endif
