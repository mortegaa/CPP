/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:11:59 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/13 20:27:17 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Base.hpp"
#include "includes/A.hpp"
#include "includes/B.hpp"
#include "includes/C.hpp"
#include <ctime>
#include <random>
#include <iostream>

enum {classA, classB, classC};

Base* generate( void )
{
	srand(time(NULL));

	int randomly = rand() % 3 + 1;
	int code = randomly == 1 ? classA : randomly == 2 ? classB : randomly == 3 ? classC : 5;

	switch (code)
	{
		case classA:
			return new A();
		case classB:
			return new B();
		case classC:
			return new C();
		default:
			return new Base();
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Base" << std::endl;
}

void identify(Base& p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Base" << std::endl;

}

int main( void )
{
	A* a = new A();
	B* b = new B();
	C* c = new C();


	identify(b);
	identify(generate());
	return (0);
}
