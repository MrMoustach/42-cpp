/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 21:31:03 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/21 21:36:18 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Garfield just spawned near the fridge again" << std::endl;
	_type = "Cat";
}

Cat::~Cat()
{
	std::cout << "No More Mondays for Garfield" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow.." << std::endl;
}