/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 01:13:47 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/09 22:27:27 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include <iostream>

#define N 10

int main( void )
{
	Animal* _animals[N];
	size_t	i = 0;

	while (i < N / 2)
		_animals[i++] = new Dog();
	while (i < N)
		_animals[i++] = new Cat();

	i = 0;
	while (i < N)
		delete _animals[i++];
}
