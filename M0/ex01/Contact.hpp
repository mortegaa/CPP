/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:36:25 by mortega-          #+#    #+#             */
/*   Updated: 2022/01/18 19:50:28 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact {

	public:
		Contact(void);
		Contact(std::string, std::string, std::string, std::string, int);
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
	
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_darkSecret;
		int			_phoneNumber;
};

#endif
