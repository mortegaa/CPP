/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:36:25 by mortega-          #+#    #+#             */
/*   Updated: 2022/06/26 04:16:01 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <string.h>

class Contact {

	public:
		Contact( void );
		Contact(std::string, std::string, std::string, std::string, int);
		std::string	getFirstName( void );
		std::string	getLastName( void );
		std::string	getNickName( void );
		int	getNumber( void );
		std::string getSecret( void );
	
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_darkSecret;
		int			_phoneNumber;
};

#endif
