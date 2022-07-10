/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 01:38:27 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/10 16:21:28 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

# define N 4

class Character : public ICharacter {

	private:
		AMateria*	_inventory[N];
		int			_index;
		std::string	_name;
		Character();

	public:
		Character(std::string name);
		Character(Character & ch);
		virtual ~Character();
		int const & getIndex( void ) const;
		void setIndex(int index);
		std::string const & getName( void ) const;
		void equip(AMateria* m);
		void unequip(int fdx);
		void use(int fdx, ICharacter& target);
//		AMateria*[]  getInventory()
};

#endif
