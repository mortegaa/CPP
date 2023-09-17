/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:27:50 by mortega-          #+#    #+#             */
/*   Updated: 2023/09/16 12:23:48 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <string>
# include <iostream>

template <typename T>
void iter(T const arr[], int len, void (*f)(T))
{
	if (len < 0)
		return ;

	for (int i = 0; i < len; i++)
		f(arr[i]);
}

template <typename T>
void iter(T const arr[], int len, void (*f)(const T &))
{
	if (len < 0)
		return ;

	for (int i = 0; i < len; i++)
		f(arr[i]);
}
#endif
