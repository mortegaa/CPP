/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 09:36:32 by mortega-          #+#    #+#             */
/*   Updated: 2023/04/03 15:40:36 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

# define N 4

class MateriaSource : public IMateriaSource {

	private:
		AMateria* _grimoire[N];

	public:
		MateriaSource();
		MateriaSource(MateriaSource & MS);
		~MateriaSource();
		MateriaSource & operator=(MateriaSource & MS);
		void learnMateria(AMateria* mat);
		AMateria* createMateria(std::string const & type);
};

#endif
