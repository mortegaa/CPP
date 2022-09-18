/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:47:49 by mortega-          #+#    #+#             */
/*   Updated: 2022/09/18 10:27:13 by test             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie {

	private:
		std::string	_name;
	public:
		Zombie();
		~Zombie();
		std::string getName( void );
		void setName(std::string);
		void	announce();	
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
