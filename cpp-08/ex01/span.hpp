/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:26:18 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/25 20:35:08 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <vector>

class Span
{
	private:
		unsigned int _n;
		std::vector<int> _list;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span& other);
		Span(int, int);
		~Span();
		Span & operator=(const Span& other);
		int size() const;
		std::vector<int> getVector() const;
		void addNumber(int);
		void addNumber(int, int);
		int	shortestSpan() const;
		int	longestSpan() const;
};
