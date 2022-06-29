/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:47:49 by mortega-          #+#    #+#             */
/*   Updated: 2022/06/28 21:56:28 by mortega-         ###   ########.fr       */
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
		void	announce();	
		void	randomChump(std::string name);
		Zombie	*newZombie(std::string name);
};
#endif
