/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 03:34:19 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/21 03:45:10 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_energy = 100;
	_ad = 30;
	std::cout << "A "<< name <<" FragTrap just arrieved to the party" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << _name <<" FragTrap went to bed" << std::endl;
}

void FragTrap::attack(std::string & target)
{
	std::cout << "FragTrap" << _name << " Just Puked on " << target << std::endl;
}
void FragTrap::takeDamage(unsigned int damage)
{
	std::cout << "FragTrap "<< _name <<" Fell onto the ground and took " << damage << " Damage points" << std::endl;
	_hp -= damage;
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FragTrap "<< _name <<" got " << amount << " Hp back" << std::endl;
	_hp += amount;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Anyone up for a high five guys said FragTrap "<< _name << " drunkly" << std::endl;
}


