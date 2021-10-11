/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:26:53 by iharchi           #+#    #+#             */
/*   Updated: 2021/10/11 16:48:57 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name)
{
	_name = name;
}
Zombie::~Zombie()
{
	std::cout << _name << " destroyed" << std::endl;
}
void	Zombie::announce(void)
{
	std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ...\n";
}
void	Zombie::setName(std::string name) { _name = name;}