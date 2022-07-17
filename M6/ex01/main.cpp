/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:16:04 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/13 20:30:07 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

typedef struct s_Data
{
	char		ch;
	int			num;
	std::string	str;
}				Data;

static uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

static Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main( void )
{
	Data * a = new Data;

	a->ch = 'a';
	a->num = 42;
	a->str = "HolaMundo";

	std::cout << "ch: " << a->ch << std::endl;
	std::cout << "num: " << a->num << std::endl;
	std::cout << "str: " << a->str << std::endl;

	uintptr_t serie = serialize(a);
	std::cout << serie << std::endl;

	Data * b = deserialize(serie);

	std::cout << "ch: " << b->ch << std::endl;
	std::cout << "num: " << b->num << std::endl;
	std::cout << "str: " << b->str << std::endl;
	return (0);
}
