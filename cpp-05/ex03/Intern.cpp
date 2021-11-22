/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 23:43:35 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/23 00:06:49 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

bool compare(const char a, const char b)
{
	if (std::tolower(a) == std::tolower(b))
		return true;
	return false;
}

bool compare(const std::string a, const std::string b)
{
	for(unsigned long i = 0 ; i < a.size() ; i++)
	{
		if (!compare(a.at(i), b.at(i)))
			return false;
	}
	return true;
}

const std::string Intern::_forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

Form* (*Intern::_formActions[3])(const std::string) = {&ShrubberyCreationForm::create, &RobotomyRequestForm::create, &PresidentialPardonForm::create};

Intern::Intern(){}

Intern::~Intern(){}


Intern::Intern(const Intern& other)
{
	this->operator=(other);
}

Intern& Intern::operator=(const Intern& other)
{
	(void) other;

	return (*this);
}

Form* Intern::makeForm(const std::string form, const std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (compare(form, _forms[i]))
			return ((*(Intern::_formActions[i]))(target));
	}
	std::cout << "The form you are trying to make doesn't exist." << std::endl;
	return NULL;
}
