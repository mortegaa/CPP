/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:19:16 by mortega-          #+#    #+#             */
/*   Updated: 2023/09/16 22:27:57 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <string>
# include <list>
# include <iostream>
# include <climits>
# include <fstream>

typedef struct s_bitC
{
	unsigned int	date;
	float			value;
}				t_bitC;

class BitcoinExchange {

	private:
		std::string			_file;
		std::list<t_bitC>	_lst;

	public:
		BitcoinExchange();
		BitcoinExchange(std::string file);
		BitcoinExchange(BitcoinExchange & btc);
		BitcoinExchange & operator=(BitcoinExchange & btc);
		~BitcoinExchange();
		bool isNumber(const std::string &s);
		bool validateDate(std::string date, int *num_date);
		bool validateValue(std::string value);
		bool validateFile( void );
		bool validateFile(std::string file);
		void exchange(unsigned int date, float value);

};

#endif
