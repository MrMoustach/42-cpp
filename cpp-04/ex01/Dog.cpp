/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 21:25:45 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/21 22:53:47 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Oh look cassy you got a new Dog" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Am sorry cassy but your dog went the farm upstate" << std::endl;
	delete _brain;
}

Dog::Dog(const Dog & other)
{
	std::cout << "Oh look cassy you got a new Dog" << std::endl;
	_type = other._type;
	_brain = new Brain(*(other._brain));
}

Dog & Dog::operator=(Dog & other)
{
	if (this != &other)
	{
		delete _brain;
		_brain = new Brain(*(other._brain));
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Wouf Wouf" << std::endl;
}