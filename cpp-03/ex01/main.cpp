/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 22:56:27 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/21 02:49:31 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clapTrap = ClapTrap("V1");
	ScavTrap scavTrap = ScavTrap("V2");

	clapTrap.attack(scavTrap.getName());
	scavTrap.takeDamage(10);
	scavTrap.attack(clapTrap.getName());
	clapTrap.takeDamage(10);
	clapTrap.beRepaired(10);
	scavTrap.beRepaired(5);
	scavTrap.guardGate();
}