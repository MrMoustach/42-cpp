/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:51:22 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/09 19:09:17 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char** av)
{
	std::ifstream file;
	std::ofstream outfile;
	std::string	line;
	std::size_t	found;

	(void) ac;
	file.open(av[1]);
	outfile.open(av[1] + ".replace");
	if (!file)
		std::cerr << "File could not be opened\n";
	else
	{
		while (std::getline(file, line))
		{
			found = line.find("ha");
			if (found != std::string::npos)
			{
				std::cout << found << std::endl;
			}
		}
		file.close();
		outfile.close();
	}
}