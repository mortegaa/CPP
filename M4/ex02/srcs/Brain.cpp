/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:20:56 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/26 12:12:25 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
	index = 0;
	std::cout << "God just give me a Brain" << std::endl;
}

Brain::Brain(Brain & br) { this->index = br.index; }

Brain::~Brain()
{
	std::cout << "God just let me vegetal" << std::endl;
}

Brain & Brain::operator=(Brain & br)
{
	this->index = br.index;
	return (*this);
}

std::string *Brain::getIdeas( void ) { return (_ideas); }

void	Brain::think(std::string idea)
{
	_ideas[index++] = idea;
}
