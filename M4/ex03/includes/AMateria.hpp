/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 23:50:30 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/26 13:00:12 by mortega-         ###   ########.fr       */
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
		AMateria(AMateria & M);
		virtual ~AMateria();
		AMateria & operator=(AMateria & M);
		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		void setType(std::string type);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
