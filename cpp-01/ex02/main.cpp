/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:58:37 by iharchi           #+#    #+#             */
/*   Updated: 2021/10/11 18:04:52 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "String : " << str << std::endl;
	std::cout << "StringPRT address : " << stringPTR << std::endl;
	std::cout << "StringPRT : " << *stringPTR << std::endl;
	std::cout << "StringREF address : " << &stringREF << std::endl;
	std::cout << "StringREF : " << stringREF << std::endl;
}