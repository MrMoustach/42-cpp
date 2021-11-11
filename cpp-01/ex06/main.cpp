/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 01:56:37 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/11 03:06:55 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int ac, char** av)
{
	Karen karen = Karen();
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	(void) ac;
	if (ac < 2)
	{
		std::cout << "Please provide a level of Karen" << std::endl;
		return (1);
	}
	switch (index_of(av[1], levels)) 
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			karen.complain("DEBUG");
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			karen.complain("INFO");
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			karen.complain("WARNING");
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			karen.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}