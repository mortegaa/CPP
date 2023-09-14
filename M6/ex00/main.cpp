/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:58:52 by mortega-          #+#    #+#             */
/*   Updated: 2023/07/07 22:39:28 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>
#include <limits>
#include "includes/ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Incorrect number of arguments" << std::endl;
		return (1);
	}
	std::string str(argv[1]);
	ScalarConverter SC;
	if (!SC.is_valid(str)) return (1);
	if (SC.is_special(str)) return (1);

	SC.convert(str);

	return (0);
}
