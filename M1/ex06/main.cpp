/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:53:25 by mortega-          #+#    #+#             */
/*   Updated: 2022/09/18 10:59:13 by test             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Karen.hpp"
#include <iostream>
#include <string>

enum {debug, info, warning, error};

static int	choose(std::string str)
{
	int ret;

	ret = !str.compare("DEBUG") ? debug : !str.compare("INFO") ?  info : !str.compare("WARNING") ? warning : !str.compare("ERROR") ? error : 100;
	return (ret);
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
