/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 00:39:07 by mortega-          #+#    #+#             */
/*   Updated: 2023/02/23 21:44:51 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed {

	private:
		int					_value;
		static const int	_fBits = 8;

	public:
		Fixed();
		Fixed(int value);
		Fixed(Fixed & F);
		Fixed & operator =(Fixed & f);
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits(int const raw);
};

#endif
