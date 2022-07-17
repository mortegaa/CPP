/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:06:11 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/16 11:30:12 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span() : _size(0) , _index(0) { _store = new int[0]; }

Span::Span(unsigned int size) : _size(size) , _index(0) { _store = new int[size]; }

Span::~Span() { delete [] _store; }

void Span::addNumber(int num)
{
	try { if (_index == _size) throw(MaxNumberException()); 
			else  { 
				if (_index < _size)
				_store[_index++] = num;
			}
	}
	catch (MaxNumberException e) { std::cout << "There is no space in the array" << std::endl; }
}

unsigned int Span::shortestSpan( void )
{
	try { if (_index == 0 || _index == 1) throw(NoNumberException());
		else {
			
			int span;
			for (size_t i = 0; i < _index; i++)
			{
				for (size_t j = 0; j < _index; j++)
				{
					if (i != j)
					{
						unsigned int temp = std::abs(_store[i] - _store[j]);
						span = temp < span ? temp : span;
					}
				}
			}
			return span;
		}
	} catch (NoNumberException e) { std::cout << "There is no enough numbers in the Span" << std::endl; return 1; }
}

unsigned int Span::longestSpan( void )
{
	try { if (_index == 0 || _index == 1) throw(NoNumberException());
		else {
			
			int span;
			for (size_t i = 0; i < _index; i++)
			{
				for (size_t j = 0; j < _index; j++)
				{
					if (i != j)
					{
						int temp = std::abs(_store[i] - _store[j]);
						span = temp > span ? temp : span;
					}
				}
			}
			return span;
		}
	} catch (NoNumberException e) { std::cout << "There is no enough numbers in the Span" << std::endl; return 1; }
}
const char *Span::MaxNumberException::what() const throw() { return "No more numbers"; }
const char *Span::NoNumberException::what() const throw() { return "No soace left"; }
