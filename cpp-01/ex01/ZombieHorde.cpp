/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:44:11 by iharchi           #+#    #+#             */
/*   Updated: 2021/10/11 16:56:59 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
	Zombie* zombies = new Zombie[n];
	
	for (int i = 0; i < n; i++)
		zombies[i].setName(name);
	return (zombies);
}