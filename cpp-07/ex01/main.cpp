/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:52:09 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/24 15:44:27 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template <typename T>
	void plusOne(T const & a)
	{
		std::cout <<  a + 1 << std::endl;
	}

template <typename T>
	void upper(T const & a)
	{
		if (a >= 'a' && a <= 'z')
			std::cout << (char)(a - 32);
		else
			std::cout << (char) a;
	}

template void plusOne<int>(int const &a);
template void upper<char>(char const &a);

int main(int ac, char ** av)
{
	int test[5] = {1, 2, 3, 4, 5};
	::iter(test, 5, &plusOne<int>);
	if (ac >= 2)
	{
		::iter(av[1], strlen(av[1]), &upper<char>);
		std::cout << std::endl;
	}
}
