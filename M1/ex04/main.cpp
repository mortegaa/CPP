/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:38:16 by mortega-          #+#    #+#             */
/*   Updated: 2022/04/23 16:52:22 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char	**argv)
{
	char	line[99];
	size_t	len = strlen(argv[2]);

	std::string	lineS;
	std::string file = argv[1];
	file.append(".replace");

	if (argc > 4)
		return (-1);

	std::ifstream	input(argv[1]);
	std::ofstream	output(file);

	while (input.getline(line, 99))
	{
		lineS = line;
		
		while (lineS.find(argv[2]) < lineS.length())
		{
			size_t	pointer = lineS.find(argv[2]);
			std::string	sample = lineS.substr(0, pointer);
			output << sample << argv[3];

			lineS = lineS.substr(pointer + len, lineS.length() - (pointer + len));
		}
		output << lineS << std::endl;
	}
	return (0);
}
