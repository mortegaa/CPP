/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:23:11 by mortega-          #+#    #+#             */
/*   Updated: 2022/06/26 10:50:46 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>
# include <iomanip>
# include <thread>
# include <chrono>

class PhoneBook {

	public:
		PhoneBook( void );
		void	addContact( void );
		void	searchContact( void );
		int		getIndex( void );
		void	showBook( void );
		void	showContact( int index );
	private:
		int		_index;
		static int	_totalIndex;
		Contact _contacts[8];
};

#endif
