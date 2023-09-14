/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:46:08 by mortega-          #+#    #+#             */
/*   Updated: 2023/01/08 00:17:35 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

int	PhoneBook::_totalIndex = 0;

PhoneBook::PhoneBook( void )
{
	_index = 0;	
}

int		PhoneBook::getIndex( void )
{
	return _totalIndex;
}

void	PhoneBook::addContact( void )
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
		std::cout << "*---------------------------------------------------------------*" << std::endl;
		std::cout << "> First Name: ";	std::cin.clear(); std::cin.ignore('\n', '\n'); 	getline(std::cin, name);	std::cin.clear();
		std::cout << "> Last Name: ";		getline(std::cin, lname);	std::cin.clear();
		std::cout << "> NickName: ";		getline(std::cin, nick);	std::cin.clear();
		std::cout << "> Phone Number: ";	std::cin >> number;			std::cin.clear();
		if (!std::cin.good() || number < 600000000 || number >= 723000000)
			failed = true;
		std::cout << "> Darkest Secret [ ;) ]: ";	std::cin.ignore('\n', '\n'); getline(std::cin, secret);	std::cin.clear();
		std::cout << "*---------------------------------------------------------------*" << std::endl;
		system("clear");
		std::cout << "------------	Incorrect inputs. Try Again	--------------" << std::endl << std::endl;
	}

	_contacts[_index++] = Contact(name, lname, nick, secret, number);
	if (_totalIndex < 8)
		_totalIndex++;
	if (_index == 8)
		_index = 0;
	system("clear");
}

void	PhoneBook::showBook( void )
{
	std::cout << "  INDEX   |FIRST NAME|LAST  NAME| NICKNAME " << std::endl;
	for (int i = 0 ; i < _totalIndex ; i++)
	{
		std::cout << "     " << i + 1 << "    ";
		if (_contacts[i].getFirstName().length() > 9)
			std::cout << "|" << _contacts[i].getFirstName().substr(0, 9) << ".";
		else
			std::cout << "|" << std::setw(10) << _contacts[i].getFirstName();
		if (_contacts[i].getLastName().length() > 9)
			std::cout << "|" << _contacts[i].getLastName().substr(0, 9) << ".";
		else
			std::cout << "|" << std::setw(10) << _contacts[i].getLastName();
		if (_contacts[i].getNickName().length() > 9)
			std::cout << "|" << _contacts[i].getNickName().substr(0, 9) << "." << std::endl;
		else
			std::cout << "|" << std::setw(10) << _contacts[i].getNickName() << std::endl;
	}
}

void	PhoneBook::searchContact( void )
{
	int		index;

	showBook();
	std::cout << std::endl << "Selection Contact: ";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin >> index;
	while (!std::cin.good() || (index < 0) || (index > _totalIndex))
	{
		if (!index) return ;
		std::cout << "Please, introduce a correct index" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> index;
	}
	showContact(index - 1);
}

void	PhoneBook::showContact( int index )
{
	std::cout << std::endl << "*-----------------------------------------------------*" << std::endl;
	std::cout << "     " << index + 1 << "    ";
	if (_contacts[index].getFirstName().length() > 9)
		std::cout << "|" << _contacts[index].getFirstName().substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << _contacts[index].getFirstName();
	if (_contacts[index].getLastName().length() > 9)
		std::cout << "|" << _contacts[index].getLastName().substr(0, 9) << ".";
	else
			std::cout << "|" << std::setw(10) << _contacts[index].getLastName();
	if (_contacts[index].getNickName().length() > 9)
		std::cout << "|" << _contacts[index].getNickName().substr(0, 9) << "." << std::endl;
	else
		std::cout << "|" << std::setw(10) << _contacts[index].getNickName() << std::endl;

	std::cout << "*-----------------------------------------------------*" << std::endl;
	std::cout << std::endl << "Number: " << _contacts[index].getNumber() << std::endl;
	std::cout << std::endl << "Darkest Secret [ ;) ]: " << std::endl << "\t" << _contacts[index].getSecret() << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(2000) );
	system("clear");
}
