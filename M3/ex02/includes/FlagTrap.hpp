/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 15:13:52 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/01 21:58:18 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include "ClapTrap.hpp"

class FlagTrap : public ClapTrap {

	public:
		FlagTrap();
		FlagTrap(FlagTrap & Fl);
		FlagTrap(std::string name);
		~FlagTrap();
		FlagTrap operator=(FlagTrap & Fl);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void highFiveGuys( void );
};

#endif
