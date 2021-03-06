/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:53:25 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/10 17:58:14 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Karen.hpp"
#include <iostream>
#include <string>

enum {debug, info, warning, error};

static int	choose(std::string str)
{
	if (!str.comparestrcmp(str, "DEBUG"))
		return (debug);
	else if (!strcmp(str, "INFO"))
		return (info);
	else if (!strcmp(str, "WARNING"))
		return (warning);
	else if (!strcmp(str, "ERROR"))
		return (error);
	else
		return (100);
}

int	main(int argc, char **argv)
{
	Karen	K;
	int		code;
	std::string keyCode;

	if (argc < 2)
	{
		std::cout << "Introduce any complain" << std::endl;
		return (1);
	}
	keyCode = argv[1];
	code = choose(keyCode);
	switch (code)
	{
		case debug:
			std::cout << "[ DEBUG ]" << std::endl;
			K.complain("debug");
			break ;
		case info:
			std::cout << "[ INFO ]" << std::endl;
			K.complain("info");
			break ;
		case warning:
			std::cout << "[ WARNING ]" << std::endl;
			K.complain("warning");
			break ;
		case error:
			std::cout << "[ ERROR ]" << std::endl;
			K.complain("error");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
	return (0);
}
