/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:23:37 by mortega-          #+#    #+#             */
/*   Updated: 2023/09/16 22:29:38 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/BitcoinExchange.hpp"

#define file "cpp_09/data.csv"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: incorrect number of arguments" << std::endl;
		return (0);
	}

	BitcoinExchange btc(file);

	if (!btc.validateFile())
	{
		std::cout << "Incorrect input file" << std::endl;
		return 1;
	}
	std::string doc(argv[1]);
	btc.validateFile(doc);
}
