/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:29:34 by mortega-          #+#    #+#             */
/*   Updated: 2023/07/07 22:31:05 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <string>

enum {inf_plus, inf_neg, nan};

class ScalarConverter {

	public:
		ScalarConverter();
		static bool is_special(std::string str);
		static bool is_valid(std::string str);
		static void convert(std::string str);
		~ScalarConverter();
};

#endif
