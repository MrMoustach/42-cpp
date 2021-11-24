/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:48:03 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/24 15:40:54 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
	void iter(T array[], int size, void (*fun)(T const & x))
	{
		for (int i = 0; i < size; i++)
			fun(array[i]);
	}