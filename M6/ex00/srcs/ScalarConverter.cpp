/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:50:20 by mortega-          #+#    #+#             */
/*   Updated: 2023/07/07 22:42:35 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}

bool ScalarConverter::is_valid(std::string str)
{
	if (str == "+inf" || str == "-inf" || str == "nan")
		return (true);
	if (str == "+inff" || str == "-inff" || str == "nanf")
		return (true);
	size_t i = -1;
	while (++i < str.length())
		if ((str[0] == '-' && !std::isdigit(str[1])))
			return false;
	return true;
}

bool ScalarConverter::is_special(std::string str)
{
	int code = 0;

	code = str == "+inf" || str == "+inff" ? inf_plus : str == "-inf" || str == "-inff" ? inf_neg : str == "nan" || str == "nanf" ? nan : 5;

	if (code == 5) return false;

	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	switch (code)
	{
		case inf_plus:
			std::cout << "float: +inff" << std::endl;
			std::cout << "double: +inf" << std::endl;
			break ;
		case inf_neg:
			std::cout << "float: -inff" << std::endl;
			std::cout << "double: -inf" << std::endl;
			break ;
		case nan:
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
			break ;
		default:
			exit(0);
			break ;
	}
	return true;
}

void ScalarConverter::convert(std::string str)
{
	if ((str[0] == '-' && !std::isdigit(str[1])) || (!std::isdigit(str[0]) && str[0] != '-'))
	{
		// CHAR
		std::cout << "char: '" << str[0] << "'" << std::endl;
		// INT
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
		// FLOAT
		std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(str[0]) << "f" << std::endl;
		// DOUBLE
		std::cout << "double: " << static_cast<double>(str[0]) << std::endl;
	} else {

		// CHAR
		char ch = static_cast<char>(std::stoi(str));
		if (!std::isprint(ch))
			std::cout << "char: Non displayable" << std::endl;
		else std::cout << "char: '" << ch << "'" << std::endl;

		// INT
		int num = static_cast<int>(std::stoi(str));
		std::cout << "int: " << num << std::endl;

		// FLOAT
		float numf = static_cast<float>(std::stof(str));
		std::cout << "float: " << std::setprecision(1) << std::fixed << numf << "f" << std::endl;

		// DOUBLE
		double numd = static_cast<double>(std::stof(str));
		std::cout << "double: " << numd << std::endl;
	}
}
