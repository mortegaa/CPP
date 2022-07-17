/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:11:00 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/16 13:01:59 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template < typename T >
void swap(T & a, T & b)
{
	T	c;

	c = a;
	a = b;
	b = c;
}

template <typename T>
T const & min(T const & a, T const & b)
{
	if (a < b) return (a);
	else return (b);
}

template <typename T>
T const & max(T const & a, T const & b)
{
	if (a > b) return (a);
	else return (b);
}

#endif
