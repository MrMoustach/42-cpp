/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 03:55:53 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/21 04:11:32 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) :ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	_name = name;
	_hp = FragTrap::getHp();
	_energy = ScavTrap::getEnergy();
	_ad = FragTrap::getAd();
	std::cout << "oh no "<< name <<" DiamondTrap is here, let's leave this freak alone" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Finally " << _name <<" DiamondTrap is gone we are safe" << std::endl;
}

void DiamondTrap::attack(std::string & target)
{
	ScavTrap::attack(target);
}
void DiamondTrap::takeDamage(unsigned int damage)
{
	std::cout << "DiamondTrap "<< _name <<" got punched " << damage << " Damage points" << std::endl;
	_hp -= damage;
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	std::cout << "DiamondTrap "<< _name <<" magically got " << amount << " Hp back, Riot fix your game pls" << std::endl;
	_hp += amount;
}

void DiamondTrap::guardGate()
{
	ScavTrap::guardGate();
}

void DiamondTrap::highFivesGuys()
{
	FragTrap::highFivesGuys();
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << _name << " or " << ClapTrap::getName() << ", Oh my god who am i???" << std::endl;
}
