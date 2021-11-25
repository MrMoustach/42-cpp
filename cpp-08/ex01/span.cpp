/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zed <zed@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:07:24 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/25 17:03:22 by zed              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() :_n(0) {}

Span::Span(unsigned int n)
{
	_n = n;
}

Span::Span(const Span& other)
{
	_n = other.size();
	_list = other.getVector();
}

Span::Span(int start, int end)
{
	_n = end - start;
	addNumber(start, end);
}

Span::~Span(){}

Span & Span::operator=(const Span& other)
{
	_n = other.size();
	_list = other.getVector();
	return (*this);
}

int Span::size() const{return _n;}
std::vector<int> Span::getVector() const{return _list;}

void Span::addNumber(int a)
{
	if (_list.size() >= _n)
	{
		std::cout << "the array is full." << std::endl;
		return;
	}
	_list.push_back(a);
}

void Span::addNumber(int start, int end)
{
	int diff = end - start;
	if (diff <= 0)
	{
		std::cout << "Come on really? put a smaller start than end." << std::endl;
		return;
	}

	if (diff + _list.size() >= _n)
	{
		std::cout << "the array is full." << std::endl;
		return;
	}
	for (int i = start; i <= end; i++)
		_list.push_back(i);
}

int Span::longestSpan() const
{
	int min = *std::min_element(_list.begin(), _list.end());
	int max = *std::max_element(_list.begin(), _list.end());
	return std::abs(max - min);
}
int Span::shortestSpan() const
{
	std::vector<int> tmp = std::vector<int>(_list);
	if (_list.size() < 2)
		return (0);
	std::sort(tmp.begin(), tmp.end());
	int ret = std::abs(tmp[0] - tmp[1]);

	for (unsigned int i = 0; i < _n; i++)
	{
		int diff = std::abs(tmp[i] - tmp[i + 1]);
		
		if (diff < ret)
			ret = diff;
	}
	return (ret);
}