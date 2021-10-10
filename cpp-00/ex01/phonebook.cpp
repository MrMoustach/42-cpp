/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:39:21 by iharchi           #+#    #+#             */
/*   Updated: 2021/10/10 15:09:15 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(){
	for (int i = 0; i < _MAX_CONTACT; i++)
		_contacts[i] = Contact();
	_count = 0;
}
Phonebook::~Phonebook(){}
void	Phonebook::add_contact(std::string first_name, std::string last_name, std::string nickname, std::string phonenumber, std::string darkest_secret)
{
	Contact contact = Contact(first_name, last_name, nickname, phonenumber, darkest_secret);
	set_contacts(contact);
}
void	print_string(std::string s)
{
	int	size;
	
	size = s.size();
	std::cout << std::left << std::setw(9) << s.substr(0, 9);
	if (size > 9)
		std::cout << ".";
	else
		std::cout << " ";
}
void	Phonebook::prompt_search()
{
	for (int i = 0; i < _MAX_CONTACT; i++)
	{
		if (_contacts[i].empty)
			continue ;
		std::cout << i << " | ";
		print_string(_contacts[i].get_first_name());
		std::cout << " | ";
		print_string(_contacts[i].get_last_name());
		std::cout << " | ";
		print_string(_contacts[i].get_nickname());
		std::cout << " | ";
		std::cout << "\n";
	}
}
void	Phonebook::print_contact(int index)
{
	Contact contact;

	contact = _contacts[index];
	std::cout << contact.get_first_name() << "\n";
	std::cout << contact.get_last_name() << "\n";
	std::cout << contact.get_nickname() << "\n";
	std::cout << contact.get_phonenumber() << "\n";
	std::cout << contact.get_darkest_secret() << "\n";
}

void	Phonebook::set_contacts(Contact contact)
{
	_count %= _MAX_CONTACT;
	_contacts[_count++] = contact;
}
Contact	Phonebook::get_contact(int index)
{
	return _contacts[index];
}
int		Phonebook::get_max_contacts()
{
	return _MAX_CONTACT;
}
int		Phonebook::get_current_count()
{
	return _count;
}