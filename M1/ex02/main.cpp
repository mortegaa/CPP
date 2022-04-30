/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 09:32:47 by mortega-          #+#    #+#             */
/*   Updated: 2022/04/19 10:20:15 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string s = "HI THIS IS A BRAIN";

	std::string	*stringPTR = &s;
	std::string	&stringREF = s;

	std::cout << "Veamos: " << std::endl;
	std::cout << "STR --> " << s << std::endl;
	std::cout << "PTR --> " << stringPTR << std::endl;
	std::cout << "REF --> " << stringREF << std::endl;
}
