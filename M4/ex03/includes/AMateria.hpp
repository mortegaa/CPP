/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 23:50:30 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/10 15:26:48 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <string>
# include <iostream>

class ICharacter;

class AMateria {

	protected:
		std::string _type;

	public:
		AMateria();
		virtual ~AMateria();
		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		void setType(std::string type);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
