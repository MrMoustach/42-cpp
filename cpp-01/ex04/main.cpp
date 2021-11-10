/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:51:22 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/10 13:06:06 by iharchi          ###   ########.fr       */
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

	if (ac != 4)
	{
		std::cerr << "Please provide 3 argument as ./replace [file] [string to replace] [replacement]";
	}
	file.open(av[1]);
	
	std::string s = ".replace";
	s = av[1] + s;
	outfile.open(s);
	if (!file)
		std::cerr << "File could not be opened\n";
	else
	{
		while (std::getline(file, line))
		{
			found = 0;
			std::size_t i = 0;
			while (1)
			{
				found = line.find(av[2], found);
				if (found == std::string::npos)
				{
					outfile << &line[i];
					break ;
				}
				for (; i < found; i++)
				{
					if (i >= line.length())
						break ;
					outfile << line[i];
				}
				if (found < line.length())
					outfile << av[3];
				found += strlen(av[2]);
				i = found;
			}
			outfile << std::endl;
		}
		file.close();
		outfile.close();
	}
}