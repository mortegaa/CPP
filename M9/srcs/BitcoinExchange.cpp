/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:59:32 by mortega-          #+#    #+#             */
/*   Updated: 2023/09/12 20:22:54 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : _file("") {}
BitcoinExchange::BitcoinExchange(std::string file) : _file(file) {}

BitcoinExchange & BitcoinExchange::BitcoinExchange(BitcoinExchange & btc)
{
	this->_file = btc.file;
	list<int>::iterator itr;
	for (itr = btc._lst.begin(); itr != btc._lst.end(); ++itr)
		this->_lst.push_front(*itr);
}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange & btc)
{
	this->_file = btc.file;
	list<int>::iterator itr;
	for (itr = btc._lst.begin(); itr != btc._lst.end(); ++itr)
		this->_lst.push_front(*itr);

	return (*this);
}


BitcoinExchange::~BitcoinExchange()
{
	this->_lst.clear();
}

bool BitcoinExchange::validateFile( void )
{

}

BitcoinExchange::
BitcoinExchange::
BitcoinExchange::
