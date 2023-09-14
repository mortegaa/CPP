/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:17:07 by mortega-          #+#    #+#             */
/*   Updated: 2023/04/01 11:59:50 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {

	private:
		int			index;
		std::string _ideas[100];

	public:
		Brain();
		Brain(Brain & B);
		~Brain();
		Brain & operator=(Brain & B);
		std::string *getIdeas( void );
		void think(std::string idea);
};

#endif
