/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:24:03 by iharchi           #+#    #+#             */
/*   Updated: 2021/10/09 14:15:57 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	std::string command;
	std::string data[5];
	Phonebook	phonebook = Phonebook();
	int	i;

	std::cout << "Welcome to your phonebook : \n";
	while (1)
	{
		std::cout << "> ";
		std::cin >> command;
		if (command == "EXIT")
		{
			exit (0);
		}
		else if (command == "ADD")
		{
			std::cout << "Fill data in this order : First name (enter) Last name (enter) nickname (enter) phone number (enter) darkest secret (enter)\n";
			for (int i = 0; i < 5; i++)
				std::cin >> data[i];
			phonebook.add_contact(data[0], data[1], data[2], data[3], data[4]);
			std::cout << "Contact added\n";
		}
		else if (command == "SEARCH")
		{
			std::cout << "List of contacts\n";
			phonebook.prompt_search();
			std::cout << "Please choose an index to see : ";
			std::cin >> i;
			if (i < phonebook.get_current_count() && i >= 0)
				phonebook.print_contact(i);
			else
				std::cout << "Pleast choose an index between 0 and "<< phonebook.get_current_count() << "\n";
		}
		else
			std::cout << "Please choose one of the possible commands (ADD, SEARCH, EXIT) \n";
	}
	return (0);
}