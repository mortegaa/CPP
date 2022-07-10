/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 00:33:16 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/09 01:53:36 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal {

	protected:
		std::string type;

	public:
		Animal();
		~Animal();
		Animal(std::string type);
		std::string getType( void ) const;
		void setType(std::string type);
		virtual void makeSound( void ) const;
};

#endif
