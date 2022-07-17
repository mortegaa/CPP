/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:35:17 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/16 20:43:24 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

template <typename T>
int easyfind(T vec, int num){

	for (size_t i = 0; i < vec.size(); i++)
		if (vec[i] == num)
			return (i);
	std::cout << "Value not found" << std::endl;
	return (-1);
}

#endif
