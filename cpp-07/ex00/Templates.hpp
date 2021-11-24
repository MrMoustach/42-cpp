/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:40:55 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/24 14:45:16 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
	void swap(T &a, T &b)
	{
		T tmp;
		tmp = a;
		a = b;
		b = tmp;
	}
template <typename T>
	T min(T a, T b)
	{
		return (a < b ? a : b);
	}
template <typename T>
	T max(T a, T b)
	{
		return (a > b ? a : b);
	}