/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 01:56:37 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/11 02:56:42 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main()
{
	Karen karen = Karen();
	std::string levels[4] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; i++)
	{
		std::cout << levels[i] << " : ";
		karen.complain(levels[i]);
		
	}
	return (0);
}