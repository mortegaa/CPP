/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:53:25 by mortega-          #+#    #+#             */
/*   Updated: 2022/04/23 18:16:03 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main(void)
{
	Karen K;

	std::cout << "Queremos que Karen se queje, asi que pruebas: " << std::endl;

	std::cout << "Debug: ";
	K.complain("debug");
	std::cout << std::endl << "Info: ";
	K.complain("info");

	std::cout << std::endl << "Warning: ";
	K.complain("warning");

	std::cout << std::endl << "Error: ";
	K.complain("error");
}
