/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:27:50 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/12 19:49:06 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <string>

template <typename T>
void iterator(T const arr[], size_t len, void (*f)(T))
{
	for (std::size_t i = 0; i < len; i++)
		f(arr[i]);
}

#endif
