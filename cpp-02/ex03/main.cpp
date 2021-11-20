/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 01:27:11 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/20 19:39:43 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


int main(void) {
	Point point = Point(1,2);
	Point point2 = Point(1,3);
	Point a = Point(2,3);
	Point b = Point(2,0);
	Point c = Point(-2.5f,0.5f);
	
	bool ret = bsp(a, b, c, point);
	bool ret2 = bsp(a, b, c, point2);
	std::cout << "The triangle points are:" << std::endl;
	std::cout << "A ("<< a.getX() <<", "<< a.getY() <<")" << std::endl;
	std::cout << "B ("<< b.getX() <<", "<< b.getY() <<")" << std::endl;
	std::cout << "C ("<< c.getX() <<", "<< c.getY() <<")" << std::endl;
	std::cout << "Point one is ("<< point.getX() <<", "<< point.getY() <<")" << std::endl;
	if (ret)
		std::cout << "Point one is inside the triangle" << std::endl;
	else
		std::cout << "Point one is outside the triangle" << std::endl;
	std::cout << "Point two is ("<< point2.getX() <<", "<< point2.getY() <<")" << std::endl;
	if (ret2)
		std::cout << "Point two is inside the triangle" << std::endl;
	else
		std::cout << "Point two is outside the triangle" << std::endl;
	return 0;
}