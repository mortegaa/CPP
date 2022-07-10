/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 09:39:49 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/10 16:23:11 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource() {}

MateriaSource::~MateriaSource() {}

void MateriaSource::learnMateria(AMateria* mat)
{
	static int index = 0;
   _grimoire[index++] = mat;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < N; i++)
		if (_grimoire[i]->getType() == type)
			return _grimoire[i]->clone();
	return 0;
}
