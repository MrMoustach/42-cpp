/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:07:24 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/24 19:15:12 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() {}

Span::Span(unsigned int n)
{
	_n = n;
}

Span::Span(const Span& other)
{
	_n = other.size();
	std::list<int>::iterator it = other._list.begin();
	while (it != other._list.end())
	{
		_list.push_back(*it);
	}
}

Span & operator=(const Span& other)
{
	_n = other.size();
	std::list<int>::iterator it = other.getList().begin();
	while (it != other.getList().end())
	{
		_list.push_back(*it);
	}
}

int size() const{return _n;}

void addNumber(int a)
{
	_list.push_back(a);
}

int longestSpan() const
{
	int min = *std::min_element(_list.begin(), _list.end());
	int max = *std::max_element(_list.begin(), _list.end());
	return (max - min);
}