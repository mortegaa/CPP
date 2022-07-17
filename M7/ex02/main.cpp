/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 20:00:47 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/12 20:53:35 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main( void )
{
	Array<std::string> a(5);

	std::cout << a.size() << std::endl;
	std::cout << a[0] << std::endl;

	return (0);
}
