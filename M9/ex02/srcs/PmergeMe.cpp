/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:51:49 by mortega-          #+#    #+#             */
/*   Updated: 2023/09/17 14:14:55 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

PmergeMe::PmergeMe() : _range(0), _odd(false), _last_item(0) {}
PmergeMe::PmergeMe(const PmergeMe & pm) {
	_range = pm._range;
	_odd = pm._odd;
	_last_item = pm._last_item;
}

PmergeMe & PmergeMe::operator=(const PmergeMe & pm) {
	_range = pm._range;
	_odd = pm._odd;
	_last_item = pm._last_item;

	return (*this);
}

PmergeMe::~PmergeMe() {}

void PmergeMe::setOdd(bool d) { _odd = d; }

void PmergeMe::setLastItem(int last) { _last_item = last; }

bool PmergeMe::checkInput(std::string s1, std::string s2)
{
	if (std::stoi(s1) < 0 || std::stoi(s2) < 0)
	{
		std::cerr << "Invalid Input: Number Less than 0" << std::endl;
		return false;
	}
	return true;
}
