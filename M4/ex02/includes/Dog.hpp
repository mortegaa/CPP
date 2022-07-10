/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 01:20:11 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/09 12:30:22 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

	private:
		Brain*	_brain;

	public:
		Dog();
		Dog(Dog & dog);
		~Dog();
		Brain* getBrain( void) const;
		void setBrain(Brain* brain);
		virtual void makeSound( void ) const;
};

#endif
