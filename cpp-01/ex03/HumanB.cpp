/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:20:25 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/09 18:44:57 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::~HumanB() {};

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

void HumanB::attack()
{
	if (_weapon != NULL) 
		std::cout << _name << " attacks with his " << _weapon->getType() << "\n";
	else
		std::cout << _name << " attacks with his nothing\n";
}