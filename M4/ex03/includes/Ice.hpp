/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 00:14:58 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/26 13:24:36 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {

	public:
		Ice();
		Ice(Ice & i);
		~Ice();
		Ice & operator=(Ice & i);
		void use(ICharacter & target);
		virtual AMateria* clone( void ) const;
};

#endif
