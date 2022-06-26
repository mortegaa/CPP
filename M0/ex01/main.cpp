/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:41:54 by mortega-          #+#    #+#             */
/*   Updated: 2022/06/26 04:21:59 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./includes/PhoneBook.hpp"

int	main(void)
{
	PhoneBook		Ph = PhoneBook();
	std::string		command;

	while (1)
	{
		std::cout << "cmd: ";
		std::cin >> command;
		std::cin.clear();
		if (command == "ADD")
			Ph.addContact();
		else if (command == "SEARCH")
			Ph.searchContact();
		else if (command == "EXIT")
			break ;
	}
	return (0);
}
