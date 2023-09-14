/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:35:56 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/25 20:08:17 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FlagTrap.hpp"

class DiamondTrap : public ScavTrap, public FlagTrap {

	private:
		std::string _name;

	public:
		DiamondTrap();
		DiamondTrap(DiamondTrap & Dm);
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap operator=(DiamondTrap & Dm);
		using ScavTrap::attack;
		void setActualName(std::string name);
		std::string getActualName( void );
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void whoAmI( void );
};

void	setStats(DiamondTrap & D);
#endif
