/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:19:42 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/20 19:32:37 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point();
		Point(const Fixed x, const Fixed y);
		Point(const Point& other);
		~Point();
		const Fixed getX() const;
		const Fixed getY() const;
		Point & operator = (const Point &p);
};
bool bsp(Point const a, Point const b, Point const c, Point const point);