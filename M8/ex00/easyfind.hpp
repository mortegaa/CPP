/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:35:17 by mortega-          #+#    #+#             */
/*   Updated: 2023/09/17 08:47:14 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

template <typename T>
typename T::iterator easyfind(T& container, int num)
{
	typename T::iterator it;
	for (it = container.begin(); it != container.end(); ++it)
		if (*it == num)
			break ;
	if (it == container.end())
		std::cout << "Value not found" << std::endl;
	return it;
}

#endif
