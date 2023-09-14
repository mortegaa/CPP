/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 00:24:02 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/26 13:19:30 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {

	public:
		Cure();
		Cure(Cure & c);
		~Cure();
		Cure & operator=(Cure & c);
		virtual void use(ICharacter & target);
		AMateria* clone( void ) const;
};

#endif
