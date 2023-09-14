/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 19:03:04 by mortega-          #+#    #+#             */
/*   Updated: 2023/07/07 23:00:21 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

Serializer::Serializer(Data *data) : _data(data) {}

Data *Serializer::getData( void ) const { return (_data); }

uintptr_t Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

Serializer::~Serializer( void )
{
	delete _data;
}

std::ostream & operator<<(std::ostream &os, const Serializer & s)
{
	os << "ch: " << s.getData()->ch << std::endl;
	os << "num: " << s.getData()->num << std::endl;
	os << "str: " << s.getData()->str << std::endl;
	return (os);
}
