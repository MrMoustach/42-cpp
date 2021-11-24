/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:08:54 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/24 11:01:40 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <string> 
#include <cmath>
#include <iomanip>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please provide an argument." << std::endl;
		return 1;
	}
	try
	{
		double d = std::stod(av[1]);
	
		{
			std::cout << "Char : ";
			if (d <= 255.00 && d >= -256.00)
			{
				if (d >= 32.00 && d <= 126.00)
					std::cout << "'"<< static_cast<char>(d) << "'" << std::endl;
				else
					std::cout << "Non displayable" << std::endl;
			}
			else
				std::cout << "Impossible" << std::endl;
		}
		{
			std::cout << "Int : ";
			if (d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max())
			{
				std::cout << static_cast<int>(d) << std::endl;
			}
			else
				std::cout << "Impossible" << std::endl;
		}
		std::cout << std::fixed << std::setprecision(1);
		{
			std::cout << "Float : " << static_cast<float>(d) << "f" << std::endl;
		}
		{
			std::cout << "Double : " << d << std::endl;
		}
	}
	catch(std::exception& e)
	{
		std::cout << "Char : Impossible" << std::endl;
		std::cout << "Int : Impossible" << std::endl;
		std::cout << "Float : Impossible" << std::endl;
		std::cout << "Double : Impossible" << std::endl;
	}
	return (0);
}