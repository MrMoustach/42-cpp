/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 21:25:45 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/21 21:36:10 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Oh look cassy you got a new Dog" << std::endl;
	_type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Am sorry cassy but your dog went the farm upstate" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Wouf Wouf" << std::endl;
}