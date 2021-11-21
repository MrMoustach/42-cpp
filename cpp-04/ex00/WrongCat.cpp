/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 21:41:04 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/21 21:41:57 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "Fake Garfield just spawned near the fridge again" << std::endl;
	_type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "No More Mondays for Fake Garfield" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Fake Meow.." << std::endl;
}