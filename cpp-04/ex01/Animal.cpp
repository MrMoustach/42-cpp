/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 21:22:04 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/21 23:01:24 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "A random animal just appeared" << std::endl;
	_type = "Animal";
}

Animal::~Animal()
{
	std::cout << "The animal met his maker" << std::endl;
}

Animal::Animal(const Animal & other)
{
	_type = other._type;
}

Animal & Animal::operator=(Animal & other)
{
	if (_type != other._type)
		_type = other._type;
	return *this;
}

Animal * Animal::operator=(Animal * other)
{
	return other;
}

void Animal::makeSound() const
{
	std::cout << "untangible animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return _type;
}