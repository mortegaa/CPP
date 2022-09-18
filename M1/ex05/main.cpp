/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:53:25 by mortega-          #+#    #+#             */
/*   Updated: 2022/09/18 10:45:54 by test             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Karen.hpp"
#include <iostream>

int	main(void)
{
	Karen K;

	std::cout << "Queremos que Karen se queje, asi que pruebas: " << std::endl << std::endl;

	std::cout << "Debug: " << std::endl;
	K.complain("debug");

	std::cout << std::endl << "Info: " << std::endl;
	K.complain("info");

	std::cout << std::endl << "Warning: " << std::endl;
	K.complain("warning");

	std::cout << std::endl << "Error: " << std::endl;
	K.complain("error");
}
