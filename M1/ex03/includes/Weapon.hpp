/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:26:09 by mortega-          #+#    #+#             */
/*   Updated: 2022/06/29 21:17:36 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class	Weapon {

	private:
		std::string	_type;
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		std::string const & getType();
		void	setType(std::string type);
};

#endif
