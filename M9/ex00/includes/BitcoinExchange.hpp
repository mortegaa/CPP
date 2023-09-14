/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:19:16 by mortega-          #+#    #+#             */
/*   Updated: 2023/09/12 20:22:56 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <isotream>
# include <string>

typedef struct s_bitC
{
	unsigned int	date;
	int				value;
}				t_bitC;

class BitcoinExchange {

	private:
		std::string			_file;
		std::list<t_bitC>	_lst;

	public:
		BitcoinExchange();
		BitcoinExchange(std::string file);
		BitcoinExchange & BitCoinExchange(BitcoinExchange & btc);
		BitcoinExchange & operator=(BitcoinExchange & btc);
		~BitcoinExchange();
		bool validateFile( void );
		bool validateFile(std::string file);
		bool exchange( void );

};

#endif
