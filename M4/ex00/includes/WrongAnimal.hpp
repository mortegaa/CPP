/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 00:33:16 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/09 03:42:03 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal {

	protected:
		std::string type;

	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(std::string type);
		std::string getType( void ) const;
		void setType(std::string type);
		virtual void makeSound( void ) const;
};

#endif
