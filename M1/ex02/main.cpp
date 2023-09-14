/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 09:32:47 by mortega-          #+#    #+#             */
/*   Updated: 2023/01/29 11:47:12 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string s = "HI THIS IS A BRAIN";

	std::string	*stringPTR = &s;
	std::string	&stringREF = s;
	std::string *stringREFPTR = &stringREF;

	std::cout << "Veamos: " << std::endl;
	std::cout << "STR \t--> " << s << std::endl;
	std::cout << "PTR \t--> " << stringPTR << std::endl;
	std::cout << "REF \t--> " << stringREF << std::endl;
	std::cout << "REFPTR \t--> " << stringREFPTR << std::endl;
}
