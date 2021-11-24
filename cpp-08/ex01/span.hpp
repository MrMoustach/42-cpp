/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:26:18 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/24 19:12:04 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <list>

class Span
{
	private:
		unsigned int _n;
		std::list<int> _list;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span& other);
		~Span();
		Span & operator=(const Span& other);
		int size() const;
		std::list<int> getList() const;
		void addNumber(int);
		int	shortestSpan() const;
		int	longestSpan() const;
};
