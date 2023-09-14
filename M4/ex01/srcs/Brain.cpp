/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:20:56 by mortega-          #+#    #+#             */
/*   Updated: 2023/04/01 12:02:23 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
	index = 0;
	std::cout << "God just give me a Brain" << std::endl;
}

Brain::Brain(Brain & br)
{
	this->index = br.index;
	for (size_t i = 0; i < 100; i++)
		if (br.getIdeas()[i].length())
			this->think(br.getIdeas()[i]);
}

Brain::~Brain()
{
	std::cout << "God just let me vegetal" << std::endl;
}

Brain & Brain::operator=(Brain & br)
{
	this->index = br.index;
	for (size_t i = 0; i < 100; i++)
		if (br.getIdeas()[i].length())
			this->think(br.getIdeas()[i]);
	return (*this);
}

std::string *Brain::getIdeas( void ) { return (_ideas); }

void	Brain::think(std::string idea)
{
	if (index < 100)
		_ideas[index++] = idea;
}
