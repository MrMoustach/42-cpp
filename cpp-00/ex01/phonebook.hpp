/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:39:24 by iharchi           #+#    #+#             */
/*   Updated: 2021/10/09 14:15:05 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "contact.hpp"
#include <sstream>
#include <iomanip>

class Phonebook {
	private:
		int			_count;
		static const int	_MAX_CONTACT = 8;
		Contact		_contacts[8];
	public:
		Phonebook();
		~Phonebook();
		void	add_contact(std::string first_name, std::string last_name, std::string nickname, std::string phonenumber, std::string darkest_secret);
		void	prompt_search();
		void	print_contact(int index);
		void	set_contacts(Contact contact)
		{
			_count %= _MAX_CONTACT;
			_contacts[_count++] = contact;
		}
		Contact	get_contact(int index)
		{
			return _contacts[index];
		}
		int		get_max_contacts()
		{
			return _MAX_CONTACT;
		}
		int		get_current_count()
		{
			return _count;
		}
};