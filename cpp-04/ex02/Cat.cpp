/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 21:31:03 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/21 22:53:52 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Garfield just spawned near the fridge again" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "No More Mondays for Garfield" << std::endl;
	delete _brain;
}

Cat::Cat(const Cat& other)
{
	std::cout << "Garfield just spawned near the fridge again" << std::endl;
	_type = other._type;
	_brain = new Brain(*(other._brain));
}
Cat& Cat::operator=(Cat &c)
{
	if (this != &c)
	{
		delete _brain;
		_brain = new Brain(*(c._brain));
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow.." << std::endl;
}