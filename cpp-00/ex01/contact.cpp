/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:07:34 by iharchi           #+#    #+#             */
/*   Updated: 2021/10/09 14:07:12 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
	empty = true;
}
Contact::~Contact(){}
Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phonenumber, std::string darkest_secret)
{
	set_first_name(first_name);
	set_last_name(last_name);
	set_nickname(nickname);
	set_phonenumber(phonenumber);
	set_darkest_secret(darkest_secret);
	empty = false;
}
void	show_contact_in_search()
{
	std::cout << "lmao\n";
}
void	show_contact()
{
	std::cout << "lmao2\n";
}