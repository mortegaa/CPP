/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:38:16 by mortega-          #+#    #+#             */
/*   Updated: 2023/01/29 13:31:55 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
# include <unistd.h>

int	main(int argc, char	**argv)
{
	std::string	lineS;
	std::string file;
	size_t		len;

	if (argc < 4) {
		std::cout << "The arguments are: file, str1, str2" << std::endl; return (1);}
	if (argc > 4) {
		std::cout << "Too many arguments (file, str1, str2)" << std::endl; return (1);}

	file = argv[1];
	std::ifstream	input(argv[1]);
	if (!input.is_open())
	{
		std::cout << "Not valid file" << std::endl;
	}
	std::ofstream	output(file.append(".replace"));

	len = strlen(argv[2]);
	while (getline(input, lineS))
	{	
		while (lineS.find(argv[2]) < lineS.length())
		{
			size_t	pointer = lineS.find(argv[2]);
			std::string	sample = lineS.substr(0, pointer);
			output << sample << argv[3];

			lineS = lineS.substr(pointer + len, lineS.length() - (pointer + len));
		}
		output << lineS << std::endl;
	}
	output.close();
	input.close();
	return (0);
}
