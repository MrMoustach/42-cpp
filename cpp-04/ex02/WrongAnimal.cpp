/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 21:39:42 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/21 21:41:47 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "A random wrong animal just appeared" << std::endl;
	_type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "The wrong animal met his maker" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "untangible wrong animal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return _type;
}