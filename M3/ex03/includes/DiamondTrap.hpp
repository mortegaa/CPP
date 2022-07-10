/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:35:56 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/08 23:27:11 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FlagTrap.hpp"

class DiamondTrap : public ScavTrap, public FlagTrap {

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void whoAmI( void );
};

#endif
