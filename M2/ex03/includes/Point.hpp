/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:03:55 by mortega-          #+#    #+#             */
/*   Updated: 2023/03/05 16:57:05 by mortega-         ###   ########.fr       */
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
		Point operator=(const Point & P) const;
		const Point operator-(const Point & P) const;
		bool operator==(const Point & P) const;
		~Point();
		Fixed getX( void ) const;
		Fixed getY( void ) const;
};

#endif
