/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 02:35:26 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/21 04:13:16 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_energy = 50;
	_ad = 20;
	std::cout << "A "<< name <<" ScavTrap has entered the ring" << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << _name <<" ScavTrap just got RKOed" << std::endl;
}
void ScavTrap::attack(std::string & target)
{
	std::cout << "ScavTrap " << _name << " Just slapped " << target << std::endl;
}
void ScavTrap::takeDamage(unsigned int damage)
{
	std::cout << "ScavTrap "<< _name <<" suffered " << damage << " Damage points" << std::endl;
	_hp -= damage;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap "<< _name <<" Healed " << amount << " Hp back" << std::endl;
	_hp += amount;
}

void ScavTrap::guardGate()
{
	std::cout << "Just a humble ScavTrap " << _name << " Guarding the Gate" << std::endl;
}