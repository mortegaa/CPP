/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:23:37 by mortega-          #+#    #+#             */
/*   Updated: 2023/09/12 20:23:00 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/BitcoinExchange.hpp"

#define file "cpp_09/data.csv"

int main(int argc, char **argv)
{
	if (argc < 2)
		return (0);

	BitcoinExchange btc(file);

	/*
	** CONTENEDORES
	*/
	// - Array (02)
	// - List (00)
	// - Vector (02)
	// - deque (01)

	// CONTENEDOR >>>>>  

	// Validamos archivo
	// 	-> Linea por linea
	// 		- Comprobamos fecha
	// 		- Comprobamos valor
	// 		- Pusheamos cada una de las entradas al contenedor
	btc.validateFile();

	// Parseamos el archivo
	//  -> Línea por línea
	//  	- Comprobamos fecha
	//  	- Comprobamos valor
	btc.exchange();
	//		- Validamos el archivo (lo de antes)
	//		- fecha por fecha y busqueda de la fecha más cercana
	//  	- Realizamos las conversiones y printeamos por pantalla 
	//  	- 

}
