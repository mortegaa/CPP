/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:11:59 by mortega-          #+#    #+#             */
/*   Updated: 2023/07/08 09:44:00 by mortega-         ###   ########.fr       */
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
	else if (dynamic_cast<Base*>(p))
		std::cout << "Base" << std::endl;
	else
		std::cout << "Not known class" << std::endl;
}

void identify(Base& p)
{
	try {
		if (dynamic_cast<A*>(&p) == NULL)
			throw(NoClassA());
		else
		{
			std::cout << "A" << std::endl;
			return ;
		}
	} catch (NoClassA e) { std::cout << "It is not a A class" << std::endl; }
	try {
		if (dynamic_cast<B*>(&p) == NULL)
			throw(NoClassB());
		else
		{
			std::cout << "B" << std::endl;
			return ;
		}
	} catch (NoClassB e) { std::cout << "It is not a B class" << std::endl; }
	try {
		if (dynamic_cast<C*>(&p) == NULL)
			throw(NoClassC());
		else
		{
			std::cout << "C" << std::endl;
			return ;
		}
	} catch (NoClassC e) { std::cout << "It is not a C class" << std::endl; }
	try {
		if (dynamic_cast<Base*>(&p) == NULL)
			throw(NoClassBase());
		else
		{
			std::cout << "Base" << std::endl;
			return ;
		}
	} catch (NoClassBase e) { std::cout << "It is not a Base class" << std::endl; }
}

int main( void )
{
	A* a = new A();
	B* b = new B();
	C* c = new C();
	A  a2 = A();
	B  b2 = B();
	C  c2 = C();


	identify(a);
	identify(b);
	identify(c);

	std::cout << std::endl;
	identify(generate());
	std::cout << std::endl;

	identify(a2);
	identify(b2);
	identify(c2);
	return (0);
}
