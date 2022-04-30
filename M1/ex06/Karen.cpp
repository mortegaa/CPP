/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:59:09 by mortega-          #+#    #+#             */
/*   Updated: 2022/04/23 19:06:06 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

Karen::Karen(){}
Karen::~Karen(){}

void	Karen::complain(std::string level)
{

	void	(Karen::*methods[4])( void ) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	std::string complaintLevels[4] = {
		"debug",
		"info",
		"warning",
		"error"
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == complaintLevels[i])
			(this->*(methods[i]))();
	}
}

void	Karen::debug(void)
{
	std::cout << "Esto es un debug" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "Esto es informativo" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "Esto es un warning" << std::endl;
}

void	Karen::error(void)
{
	std::cout << "Esto es un error NOOOOO!!!!" << std::endl;
}
