/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 22:17:15 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/22 22:37:58 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential pardon", "empty", 25, 5) {}
PresidentialPardonForm::~PresidentialPardonForm(){}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential pardon", target, 25, 5){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : Form(other) {}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &other) 
{
	Form::operator = (other);
	
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	
	std::cout << Form::getTarget() << " has been pardoned by Zafod Beeblebox" << std::endl;
}