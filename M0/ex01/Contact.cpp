/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:20:12 by mortega-          #+#    #+#             */
/*   Updated: 2022/01/18 19:41:55 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	_firstName = "";
	_lastName = "";
	_nickName = "";
	_darkSecret = "";
	_phoneNumber = 600000000;
}

Contact::Contact(std::string name, std::string lname, std::string nick, std::string secret, int number)
{
	_firstName = name;
	_lastName = lname;
	_nickName = nick;
	_darkSecret = secret;
	_phoneNumber = number;
}

std::string	Contact::getFirstName(void)
{
	return _firstName;
}

std::string Contact::getLastName(void)
{
	return _lastName;
}

std::string	Contact::getNickName(void)
{
	return _nickName;
}
