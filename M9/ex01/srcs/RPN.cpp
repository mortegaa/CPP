/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:52:57 by mortega-          #+#    #+#             */
/*   Updated: 2023/09/17 00:54:27 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"
#include <iostream>

RPN::RPN() : _res(0) {}

RPN::~RPN()
{
	while (!_stk.empty())
		_stk.pop();
} 

RPN::RPN(RPN & r)
{
	_res = r._res;
}

RPN & RPN::operator=(RPN & r)
{
	_res = r._res;

	return (*this);
}

bool RPN::isNumber(const std::string& s)
{
	for (size_t i = 0; i < s.size(); i++)
		if (!std::isdigit(s[i]))
			return false;
	return true;
}

bool RPN::addNumber(int num)
{
	_stk.push(num);
	return true;
}

bool RPN::calculus(std::string op)
{
	if (_stk.size() < 2)
		return false;

	int top = _stk.top();
	_stk.pop();
	if (op == "+")
		_res = _stk.top() + top;
	else if (op == "-")
		_res = _stk.top() - top;
	else if (op == "*")
		_res = _stk.top() * top;
	else if (op == "/")
		_res = _stk.top() / top;

	_stk.pop();
	_stk.push(_res);

	return true;
}

int RPN::getResult( void ) { return _res; }
