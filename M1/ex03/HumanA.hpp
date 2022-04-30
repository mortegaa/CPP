/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:33:26 by mortega-          #+#    #+#             */
/*   Updated: 2022/04/19 12:31:05 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class	HumanA {

	private:
		std::string _name;
		Weapon		*_weapon;
	public:
		HumanA();
		HumanA(std::string name, Weapon & wep);
		~HumanA();
		void	attack();
		void	setWeapon(Weapon & wep);
};

#endif
