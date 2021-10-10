/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:53:47 by iharchi           #+#    #+#             */
/*   Updated: 2021/10/10 15:06:55 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact {
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phonenumber;
		std::string _darkest_secret;
	public:
		bool empty;
		Contact();
		Contact(std::string first_name, std::string last_name, std::string nickname, std::string phonenumber, std::string darkest_secret);
		~Contact();
		void	show_contact_in_search();
		void	show_contact();
		void	set_first_name(std::string first_name);
		void	set_last_name(std::string last_name);
		void	set_nickname(std::string nickname);
		void	set_phonenumber(std::string phonenumber);
		void	set_darkest_secret(std::string darkest_secret);
		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nickname();
		std::string	get_phonenumber();
		std::string	get_darkest_secret();
};