/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:45:08 by mortega-          #+#    #+#             */
/*   Updated: 2023/09/11 21:11:03 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
	
	private:
		size_t		_begin;
		size_t		_end;

	public:
		MutantStack() {};
		MutantStack(const MutantStack<T> &src) {*this = src;}
		~MutantStack() {};

		MutantStack<T> &operator=(const MutantStack<T> &src)
		{
			if (this == &src)
				return (*this);
			std::stack<T>::operator=(src);
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator begin() { return (std::stack<T>::c.begin()); }
		iterator end() { return (std::stack<T>::c.end()); }

		const_iterator begin() const { return (std::stack<T>::c.begin()); }
		const_iterator end() const { return (std::stack<T>::c.begin()); }

		reverse_iterator rbegin() { return (std::stack<T>::c.begin()); }
		reverse_iterator rend() { return (std::stack<T>::c.begin()); }

		const_reverse_iterator rbegin() const { return (std::stack<T>::c.begin()); }
		const_reverse_iterator renn() const { return (std::stack<T>::c.begin()); }

};

#endif
