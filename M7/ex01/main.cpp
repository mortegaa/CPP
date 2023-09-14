/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:36:05 by mortega-          #+#    #+#             */
/*   Updated: 2023/09/14 20:15:50 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void wr(char ch) { std::cout << "Char code: " << static_cast<unsigned int>(ch) << std::endl; }
void s(int num) { 
	static int sum = 0;

	sum += num;
	std::cout << "Num: " << static_cast<int>(num) << "\tSum: " << sum << std::endl; 
}

int main( void )
{
	std::cout << "\n*********** CHAR *****************\n" << std::endl;

	char abc[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	iter(abc, 10, wr);

	std::cout << "\n*********** INT *****************\n" << std::endl;
	int a123[10] = {1, 3, 5, 9, 12, 45, 87 , 4, -5};
	iter(a123, 9, s);

}
