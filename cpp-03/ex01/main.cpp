/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 22:56:27 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/20 23:03:41 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap = ClapTrap("V1");
	ClapTrap clapTrap2 = ClapTrap("V2");

	clapTrap.attack(clapTrap2.getName());
	clapTrap2.takeDamage(10);
	clapTrap2.attack(clapTrap.getName());
	clapTrap.takeDamage(10);
	clapTrap.beRepaired(10);
	clapTrap2.beRepaired(5);
}