/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:57:01 by mortega-          #+#    #+#             */
/*   Updated: 2023/09/17 14:15:00 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PmergeMe.hpp"


int main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "Not enough arguments" << std::endl;
	else if (argc < 3)
		std::cout << "Not enough numbers" << std::endl;

	PmergeMe pm;
	pm.setRange(argc - 1);
	pm.setOdd(false);
	if ((argc - 1) % 2 != 0)
		pm.setOdd(true);
	std::string lastS(argv[argc - 1]);
	int last = std::stoi(lastS);
	if (last < 0)
	{
		std::cout << "Negative number" << std::endl;
		return (1);
	}
	pm.setLastItem(last);

	std::cout << "Before : ";
	for (int i = 1; i < argc; ++i)
		std::cout << argv[i] << " ";

	// Vector
	std::vector<std::pair<unsigned int, unsigned int> > vec;
	for (int i=1; i < argc - 1; i+=2)
	{
		std::string arg1(argv[i]);
		std::string arg2(argv[i + 1]);
		if (isdigit(arg1[0]))
		{
			if (!(pm.checkInput(arg1, arg2)))
				return (1);
			vec.push_back(std::make_pair(std::stoi(arg1), std::stoi(arg2)));
		}
	}
	std::vector<unsigned int> vec_a, vec_b;
	pm.timedSort(vec, vec_a, vec_b, 'v');
	
	// Deque
	std::deque<std::pair<unsigned int, unsigned int> > dq;
	for (int i=1; i < argc - 1; i+=2)
	{
		std::string arg1(argv[i]);
		std::string arg2(argv[i + 1]);
		if (isdigit(*argv[i]))
		{
			if (!pm.checkInput(arg1, arg2))
				return (1);
			dq.push_back(std::make_pair(std::stoi(arg1), std::stoi(arg2)));
		}
	}
	std::deque<unsigned int> dq_a, dq_b;
	pm.timedSort(dq, dq_a, dq_b, 'd');
}
