/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 00:39:07 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/02 13:57:30 by mortega-         ###   ########.fr       */
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
		Fixed	operator =(const Fixed & f);
		bool	operator >(const Fixed & f1) const;
		bool	operator <(const Fixed & f) const;
		bool	operator >=(const Fixed & f) const;
		bool	operator <=(const Fixed & f) const;
		bool	operator ==(const Fixed & f) const;
		bool	operator !=(const Fixed & f) const;
		Fixed	operator +(const Fixed & f);
		Fixed	operator -(const Fixed & f);
		Fixed	operator *(const Fixed & f);
		Fixed	operator /(const Fixed & f);
		Fixed	operator ++( void ); // Pre-Increment
		Fixed	operator ++( int ); // Post-Increment
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		static Fixed	& min(Fixed & f1, Fixed & f2);
		static const Fixed	& min(const Fixed & f1, const Fixed & f2);
		static Fixed	& max(Fixed & f1, Fixed & f2);
		static const Fixed	& max(const Fixed & f1, const Fixed & f2);
};

		std::ostream & operator<<(std::ostream &out, const Fixed & F);

#endif
