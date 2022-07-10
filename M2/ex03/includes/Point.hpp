/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:03:55 by mortega-          #+#    #+#             */
/*   Updated: 2022/07/02 14:06:08 by mortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {

	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point();
		Point(const Point & P);
		Point(const float f1, const float f2);
		Point operator=(const Point & P);
		Point operator-(const Point & P);
		bool operator==(const Point & P) const;
		~Point();
		Fixed getX( void ) const;
		void setX(const Fixed & f);
		Fixed getY( void ) const;
		void setY(const Fixed & f);
};

#endif
