/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:51:16 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/24 18:21:27 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <exception>
#include <iostream>

class ElementNotFoundException : public std::exception
{
	public:
		ElementNotFoundException(){}
		const char * what() const throw ()
		{
			return "Element not found.";
		}
};
template <typename T>
	typename T::iterator  easyfind(T &cont, const int &n)
	{
		typename T::iterator first = std::find(cont.begin(), cont.end(), n);
		if (first == cont.end())
			throw ElementNotFoundException();
		return first;
	}
