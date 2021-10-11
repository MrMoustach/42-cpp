/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:37:04 by iharchi           #+#    #+#             */
/*   Updated: 2021/10/11 16:42:05 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

int main()
{
	Zombie* zombie = newZombie("lmao");
	zombie->announce();
	randomChump("hehe");
	zombie->~Zombie();
}