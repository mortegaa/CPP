/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:59:32 by mortega-          #+#    #+#             */
/*   Updated: 2023/09/16 22:28:05 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : _file("") {}
BitcoinExchange::BitcoinExchange(std::string file) : _file(file) {}

BitcoinExchange::BitcoinExchange(BitcoinExchange & btc)
{
	this->_file = btc._file;

	std::list<t_bitC>::iterator it;
	for (it = btc._lst.begin(); it != btc._lst.end(); ++it)
		this->_lst.push_front(*it);
}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange & btc)
{
	this->_file = btc._file;

	std::list<t_bitC>::iterator it;
	for (it = btc._lst.begin(); it != btc._lst.end(); ++it)
		this->_lst.push_front(*it);

	return (*this);
}


BitcoinExchange::~BitcoinExchange()
{
	this->_lst.clear();
}

bool BitcoinExchange::isNumber(const std::string& s)
{
	for (size_t i = 0; i < s.size(); i++)
		if (!std::isdigit(s[i]))
			return false;
	return true;
}

bool BitcoinExchange::validateDate(std::string date, int *num)
{
	std::string year("YYYY");
	std::string month("MM");
	std::string day("DD");

	if (date.size() != 10)
		return false;

	if (date[4] != '-' || date[7] != '-')
	   return false;

	month = date.substr(5, 7);
	day = date.substr(8, 10);
	year = date.substr(0, 4);
	month = month.substr(0, 2);


	int y, m, d;
	if (!isNumber(year) || !isNumber(month) || !isNumber(day))
		return (false);
	if ((y = std::stoi(year)) < 0)
		return false;
	if ((m = std::stoi(month)) < 1 || m > 12)
		return false;
	if ((d = std::stoi(day)) < 1 || d > 31)
		return false;
	int num_date = y * 10000 + m * 100 + d;
	*num = num_date;
	return true;
}

bool BitcoinExchange::validateValue(std::string value)
{
	if (value != "0" && !std::stof(value))
		return (false);
	float val = std::stof(value);
	if (val < 0)
	{
		std::cout << "Error: not a positive number" << std::endl;
		return false;
	}
	else if (val >= static_cast<float>(INT_MAX))
	{
		std::cout << "Error: too large a number" << std::endl;
		return false;
	}
	else return true;
}

bool BitcoinExchange::validateFile( void )
{
	std::ifstream input(_file);
	if (!input.is_open())
	{
		std::cout << "The file could't be opened" << std::endl;
		return false;
	}
	std::string line;
	std::getline(input, line);
	while (std::getline(input, line))
	{
		int pos = line.find(',');
		std::string date = line.substr(0, pos);
		std::string value = line.substr(pos + 1, line.size());
		t_bitC coin;
		int num_date = 0;

		if (!validateDate(date, &num_date))
		{
			std::cout << "Error: bad input => " << date << std::endl;
			return false;
		}
		coin.date = num_date;
		if (!validateValue(value))
		{
			std::cout << "Error: bad input => " << value << std::endl;
			return false;
		}
		coin.value = std::stof(value);
		_lst.push_back(coin);
	}
	input.close();
	return true;
}

bool BitcoinExchange::validateFile(std::string file)
{
	std::ifstream input(file);
	if (!input.is_open())
	{
		std::cout << "The file could't be opened" << std::endl;
		return false;
	}
	std::string line;
	std::getline(input, line);
	while (std::getline(input, line))
	{
		int pos = line.find(" | ");
		std::string date = line.substr(0, pos);
		std::string value = line.substr(pos + 3, line.size());
		int num_date = 0;
		if (!validateDate(date, &num_date))
		{
			std::cout << "Error: bad input => " << date << std::endl;
			continue ;
		}
		if (!validateValue(value))
		{
//			std::cout << "Error: bad input => " << value << std::endl;
			continue ;
		}
		std::cout << date << " => " << value << " = ";
		exchange(num_date, std::stof(value));
	}
	input.close();
	return true;

}

void BitcoinExchange::exchange(unsigned int date, float value)
{

	std::list<t_bitC>::iterator it;

	it = _lst.begin();

	if (!(date > (*it).date))
	{
		std::cout << "0 -> BitCoin was a no-born" << std::endl;
		return ;
	}
	while (it != _lst.end())
	{

		if (date <= (*it).date)
			break ;
		++it;
	}
	--it;

	float val = value * (*it).value; 
	std::cout << val<< std::endl;
}
