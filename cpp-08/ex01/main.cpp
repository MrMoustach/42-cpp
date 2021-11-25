/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:10:42 by zed               #+#    #+#             */
/*   Updated: 2021/11/25 20:48:33 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <time.h>

int main()
{
	Span sp = Span(5, 17);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	Span newSpan = Span(10000);
	newSpan.addNumber(420, 10420);
	std::cout << newSpan.shortestSpan() << std::endl;
	std::cout << newSpan.longestSpan() << std::endl;
	Span POG = Span(420 - 69);
	POG.addNumber(69, 420);
	std::cout << POG.shortestSpan() << std::endl;
	std::cout << POG.longestSpan() << std::endl;
	
	{
		Span ra = Span(69);
		srand (time(NULL));
		for (int i = 0; i < 69; i++)
			ra.addNumber(rand());
		std::cout << ra.shortestSpan() << std::endl;
		std::cout << ra.longestSpan() << std::endl;
	}
}