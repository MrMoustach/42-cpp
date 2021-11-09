/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:07:34 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/09 10:59:00 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
	_empty = true;
}
Contact::~Contact(){}
Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phonenumber, std::string darkest_secret)
{
	set_first_name(first_name);
	set_last_name(last_name);
	set_nickname(nickname);
	set_phonenumber(phonenumber);
	set_darkest_secret(darkest_secret);
	_empty = false;
}
void	show_contact_in_search()
{
	std::cout << "lmao\n";
}
void	show_contact()
{
	std::cout << "lmao2\n";
}
void	Contact::set_first_name(std::string first_name)
{
	_first_name = first_name;
}
void	Contact::set_last_name(std::string last_name)
{
	_last_name = last_name;
}
void	Contact::set_nickname(std::string nickname)
{
	_nickname = nickname;
}
void	Contact::set_phonenumber(std::string phonenumber)
{
	_phonenumber = phonenumber;
}
void	Contact::set_darkest_secret(std::string darkest_secret)
{
	_darkest_secret = darkest_secret;
}
std::string	Contact::get_first_name()
{
	return _first_name;
}
std::string	Contact::get_last_name()
{
	return _last_name;
}
std::string	Contact::get_nickname()
{
	return _nickname;
}
std::string	Contact::get_phonenumber()
{
	return _phonenumber;
}
std::string	Contact::get_darkest_secret()
{
	return _darkest_secret;
}
bool	Contact::is_empty()
{
	return _empty;
}