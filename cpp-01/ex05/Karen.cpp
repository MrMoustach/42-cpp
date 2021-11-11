/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 01:40:47 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/11 02:54:59 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	action[0] = &Karen::debug;
	action[1] = &Karen::info;
	action[2] = &Karen::warning;
	action[3] = &Karen::error;
	std::cout << "Karen has entered the arena!" << std::endl;
}

Karen::~Karen(){}

void Karen::debug(void)
{
	std::cout <<  "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout <<  "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

int index_of(std::string level, std::string *levels)
{
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		while (levels[i] == level)
			return i;
	}
	return (i);
}
void Karen::complain(std::string level)
{
	std::string levels[4] = {"debug", "info", "warning", "error"};
	(this->*action[index_of(level, levels)]) ();
}