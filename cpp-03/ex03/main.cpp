/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 22:56:27 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/21 04:08:47 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap clapTrap = ClapTrap("V1");
	ScavTrap scavTrap = ScavTrap("V2");
	FragTrap fragTrap = FragTrap("V3");
	DiamondTrap diamondTrap = DiamondTrap("V4");
	

	clapTrap.attack(scavTrap.getName());
	scavTrap.takeDamage(10);
	scavTrap.attack(clapTrap.getName());
	fragTrap.attack(scavTrap.getName());
	fragTrap.attack(clapTrap.getName());
	clapTrap.takeDamage(10);
	clapTrap.beRepaired(10);
	scavTrap.beRepaired(5);
	scavTrap.guardGate();
	fragTrap.highFivesGuys();
	std::cout << "--------------------" << std::endl;
	diamondTrap.attack(clapTrap.getName());
	clapTrap.takeDamage(diamondTrap.getAd());
	diamondTrap.attack(scavTrap.getName());
	scavTrap.takeDamage(diamondTrap.getAd());
	diamondTrap.attack(fragTrap.getName());
	fragTrap.takeDamage(diamondTrap.getAd());
	diamondTrap.takeDamage(10);
	diamondTrap.beRepaired(10);
	diamondTrap.guardGate();
	diamondTrap.highFivesGuys();
	diamondTrap.whoAmI();
	std::cout << diamondTrap.getHp() << std::endl;
	std::cout << diamondTrap.getEnergy() << std::endl;
	std::cout << diamondTrap.getAd() << std::endl;
}