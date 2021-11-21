/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 22:35:42 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/21 02:21:09 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
{
	std::cout << "A nameless ClapTrap has been spawned" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "A "<< name <<" ClapTrap has been spawned" << std::endl;
	_name = name;
	_hp = 10;
	_energy = 10;
	_ad = 10;
}

ClapTrap::ClapTrap(const ClapTrap& ct)
{
	*this = ct;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name <<" ClapTrap has been put to rest" << std::endl;
}

ClapTrap & ClapTrap::operator = (ClapTrap ct)
{
	if (this != &ct)
	{
		_name = ct.getName();
		_hp = ct.getHp();
		_energy = ct.getEnergy();
		_ad = ct.getAd();
	}
	return *this;
}

std::string& ClapTrap::getName()
{
	return _name;
}

int ClapTrap::getHp() const
{
	return _hp;
}

int ClapTrap::getEnergy() const
{
	return _energy;
}

int ClapTrap::getAd() const
{
	return _ad;
}

void ClapTrap::setName(std::string name)
{
	_name = name;
}

void ClapTrap::setHp(int hp)
{
	_hp = hp;
}

void ClapTrap::setEnergy(int energy)
{
	_energy = energy;
}

void ClapTrap::setAd(int ad)
{
	_ad = ad;
}

void ClapTrap::attack(std::string & target)
{
	std::cout << "ClapTrap "<< _name <<" attack "<< target <<", causing "<< _ad <<" points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int damage)
{
	std::cout << "ClapTrap "<< _name <<" took " << damage << " Damage point" << std::endl;
	_hp -= damage;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap "<< _name <<" Restored " << amount << " of health" << std::endl;
	_hp += amount;
}
