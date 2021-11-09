/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:37:16 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/09 18:39:14 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::Weapon() {}

Weapon::~Weapon() {}

void	Weapon::setType(std::string type)
{
	_type = type;
}

std::string	Weapon::getType()
{
	return _type;
}