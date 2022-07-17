/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:58:52 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/13 19:12:23 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <limits>

enum {inf_plus, inf_neg, nan};

static bool is_special(std::string str)
{
	int code = str == "+inf" ? inf_plus : str == "-inf" ? inf_neg : str == "nan" ? nan : 5;

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

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Incorrect number of arguments" << std::endl;
		return (1);
	}
	std::string str(argv[1]);
	if (is_special(str)) return (0);

	// CHAR
	
	if (!std::isdigit(str[0]))
		std::cout << "char: '" << str[0] << "'" << std::endl;
	else { 
		char ch = static_cast<char>(std::stoi(str));
		if (!std::isprint(ch))
			std::cout << "char: Non displayable" << std::endl;
		else std::cout << "char: '" << ch << "'" << std::endl; }

	// INT
	if (!std::isdigit(str[0]))
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
	else { 
		int num = static_cast<int>(std::stoi(str));
		std::cout << "int: " << num << std::endl;
	}

	// FLOAT
	float numf = static_cast<float>(std::stof(str));
	std::cout << "float: " << std::setprecision(1) << std::fixed << numf << "f" << std::endl;

	// DOUBLE
	double numd = static_cast<double>(std::stod(str));
	std::cout << "double: " << numd << std::endl;

	return (0);
}
