/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:47:49 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/10 19:30:43 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie {

	private:
		std::string	_name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce();	
		void	radomChump(std::string name);
		std::string const & getName( void ) const;
		void setName(std::string name);
		Zombie	*newZombie(std::string name);
		Zombie	*zombieHorde(int N, std::string name);
};

#endif
