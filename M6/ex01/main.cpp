/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:16:04 by mortega-          #+#    #+#             */
/*   Updated: 2023/07/07 22:47:03 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "includes/Serializer.hpp"

int main( void )
{
	Data * a = new Data;

	a->ch = 'a';
	a->num = 42;
	a->str = "HolaMundo";

	Serializer serie(a);

	std::cout << serie << std::endl;

	uintptr_t raw = serie.serialize(serie.getData());
	std::cout << raw << std::endl;

	std::cout << std::endl;
	Data * b = serie.deserialize(raw);

	std::cout << "ch: " << b->ch << std::endl;
	std::cout << "num: " << b->num << std::endl;
	std::cout << "str: " << b->str << std::endl;
	return (0);
}
