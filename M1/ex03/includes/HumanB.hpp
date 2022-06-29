/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:33:26 by mortega-          #+#    #+#             */
/*   Updated: 2022/06/29 22:09:06 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "../includes/Weapon.hpp"
# include <string>

class	HumanB {

	private:
		std::string _name;
		Weapon 		*_weapon;
		bool		_armed;
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon *wep);
};

#endif
