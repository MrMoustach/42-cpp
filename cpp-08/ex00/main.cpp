/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:56:11 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/24 18:22:30 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>

int main()
{
	std::list<int> l;

	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(5);
	l.push_back(4);
	l.push_back(2);
	l.push_back(3);
	l.push_back(10);
	l.push_back(69);
	l.push_back(4);
	l.push_back(3);
	l.push_back(5);
	std::list<int>::iterator it = l.begin();
	for (; it != l.end(); ++it)
		std::cout << *it << std::endl;
	
	std::cout << "---------------" << std::endl;
	std::list<int>::iterator tt = easyfind(l, 4);
	std::cout << *tt << std::endl;
	std::cout << "---------------" << std::endl;
	*tt = 5;
	it = l.begin();
	for (; it != l.end(); ++it)
		std::cout << *it << std::endl;
}