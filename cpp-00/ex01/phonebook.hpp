/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:39:24 by iharchi           #+#    #+#             */
/*   Updated: 2021/10/08 19:30:38 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "contact.hpp"

class Phonebook {
	private:
		int			_count;
		const int	_MAX_CONTACT = 8;
		Contact		_contacts[8];
	public:
		Phonebook();
		~Phonebook();
		void	add_contact(std::string first_name, std::string last_name, std::string nickname, std::string phonenumber, std::string darkest_secret);
};