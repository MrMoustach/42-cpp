/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 22:56:27 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/21 03:46:08 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap clapTrap = ClapTrap("V1");
	ScavTrap scavTrap = ScavTrap("V2");
	FragTrap fragTrap = FragTrap("V3");

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
	std::cout << fragTrap.getHp() << std::endl;
}