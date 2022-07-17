/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:42:47 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/13 20:47:06 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main( void )
{
	std::vector<int> vec;
	vec.push_back(5);
	vec.push_back(2);
	vec.push_back(10);
	vec.push_back(7);

	int ret = ::easyfind(vec, 0);
	std::cout << "Return: " << ret << std::endl;
	return (0);
}
