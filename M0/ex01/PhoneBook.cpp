/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:46:08 by mortega-          #+#    #+#             */
/*   Updated: 2022/01/20 15:27:41 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_index = 0;	
}

int		PhoneBook::getIndex()
{
	return _index;
}

void	PhoneBook::addContact()
{
	std::string	name;
	std::string	lname;
	std::string	nick;
	std::string	secret;
	int			number;
	bool		failed = true;

	while (failed == true)
	{
		failed = false;
		std::cout << "First Name: ";
		std::cin >> name;
		std::cout << "Last Name: ";
		std::cin >> lname;
		std::cout << "NickName: ";
		std::cin >> nick;
		std::cout << "Phone Number: ";
		std::cin >> number;
		if (number < 600000000 || number >= 723000000)
			failed = true;
		std::cout << "Darkest Secret: ";
		std::cin >> secret;
	}

	_contacts[_index] = Contact(name, lname, nick, secret, number);
	if (_index < 7)
		_index++;
}

void	PhoneBook::searchContact()
{
	std::cout << "  INDEX  |FIRST NAME|LAST  NAME| NICKNAME " << std::endl;
	for (int i = 0 ; i < 8 ; i++)
	{
		std::cout << "     " << i + 1 << "    ";
		std::cout << "|" << std::setw(9) << _contacts[i].getFirstName() << ".";
		std::cout << "|" << std::setw(9) << _contacts[i].getLastName() << ".";
		std::cout << "|" << std::setw(9) << _contacts[i].getNickName() << "." << std::endl;
	}
}
