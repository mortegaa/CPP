/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:00:23 by mortega-          #+#    #+#             */
/*   Updated: 2023/09/17 00:54:31 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/RPN.hpp"
#include <iostream>
#include <string>
#include <sstream>

int main(int argc, char **argv)
{

	if (argc != 2)
	{
		std::cout << "Error: bad number of arguments" << std::endl;
		return 1;
	}

	RPN r;

	std::string arg(argv[1]);
	std::stringstream ss(arg);
	while (ss >> arg)
	{
		if (arg == "+" || arg == "-" || arg == "*" || arg == "/"){
			if (!r.calculus(arg))
			{
				std::cout << "Not correct sequence" << std::endl;
				return (-1);
			}
		} else if(!r.isNumber(arg)) {
			std::cout << "Incorrect argument" << std::endl;
			return 1;
		} else if (std::stoi(arg) < 10) { r.addNumber(std::stoi(arg)); }
	}
	std::cout << r.getResult() << std::endl;
}
