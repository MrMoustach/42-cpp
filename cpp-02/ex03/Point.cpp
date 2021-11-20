/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:19:20 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/20 19:32:45 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0){}
Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y){}
Point::Point(const Point& other):_x(other.getX()), _y(other.getY()){}
Point::~Point(){}
const Fixed Point::getX() const { return _x;}
const Fixed Point::getY() const { return _y;}