/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 00:39:07 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/02 08:50:13 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class	Fixed {

	private:
		int					_value;
		static const int	_fBits = 8;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float fvalue);
		Fixed(const Fixed & F);
		Fixed operator =(const Fixed & f);
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

		std::ostream & operator<<(std::ostream &out, const Fixed & F);

#endif
