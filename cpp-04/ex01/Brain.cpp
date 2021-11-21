/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:25:29 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/21 22:47:54 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Let there be light" << std::endl;
	_ideas = new std::string[100];
}

Brain::~Brain()
{
	std::cout << "The earth is flat" << std::endl;
	delete[] _ideas;
}

Brain::Brain(const Brain & other)
{
	std::cout << "Let there be light from another light" << std::endl;
	_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
}

Brain & Brain::operator = (Brain & other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	return *this;
}

std::string* Brain::getIdeas() const
{
	return _ideas;
}