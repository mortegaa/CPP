/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 00:39:07 by mortega-          #+#    #+#             */
/*   Updated: 2022/04/24 01:44:43 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed {

	private:
		int	_value;
		static const _fBits = 8;

	public:
		Fixed();
		Fixed(Fixed & F);
		// incluir el overload =
		Fixed & operator =(Fixed & f);
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
