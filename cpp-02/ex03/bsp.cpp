/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:19:55 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/20 19:36:05 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed CalculateTriangleArea(Point const a, Point const b, Point const c)
{
	Fixed det = Fixed(0);
	
	det = ((a.getX() - b.getX()) * (c.getY() - b.getY())) - ((c.getX() - b.getX()) * (a.getY() - b.getY()));
	return (det / 2.0f);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed totalArea = CalculateTriangleArea(a, b, c);
	Fixed area1 = CalculateTriangleArea(point, b, c);
	Fixed area2 = CalculateTriangleArea(point, a, c);
	Fixed area3 = CalculateTriangleArea(point, a, b);
	if ((area1 + area2 + area3) > totalArea)
		return false;
	return true;
}
