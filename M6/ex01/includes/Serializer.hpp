/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:54:46 by mortega-          #+#    #+#             */
/*   Updated: 2023/07/07 23:00:23 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <string>
# include <iostream>

typedef struct s_Data
{
	char		ch;
	int			num;
	std::string	str;
}				Data;


class Serializer {

	private:
		Data		*_data;
		Serializer();

	public:
		Serializer(Data *data);
		Data *getData( void ) const;
		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
		~Serializer();
};

std::ostream & operator<<(std::ostream &os, const Serializer & s);

#endif
