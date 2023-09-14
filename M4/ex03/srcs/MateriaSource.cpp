/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 09:39:49 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/26 13:26:34 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource() {}

MateriaSource::MateriaSource(MateriaSource & MS) { (void)MS; }

MateriaSource::~MateriaSource() {}

MateriaSource & MateriaSource::operator=(MateriaSource & MS) { (void)MS; return (*this); }

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
