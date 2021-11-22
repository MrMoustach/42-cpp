/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 03:13:27 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/22 22:36:23 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{
		Form *form = new ShrubberyCreationForm("house");
		Bureaucrat b = Bureaucrat("Jeff", 2);
		Bureaucrat c = Bureaucrat("Elon", 150);
		b.executeForm(*form);
		b.signForm(*form);
		b.executeForm(*form);
		c.signForm(*form);
		delete form;
	}
	{
		Form *form = new RobotomyRequestForm("Jack");
		Bureaucrat b = Bureaucrat("Jeff", 2);
		Bureaucrat c = Bureaucrat("Elon", 150);
		b.executeForm(*form);
		b.signForm(*form);
		b.executeForm(*form);
		c.signForm(*form);
		delete form;
	}
	{
		Form *form = new PresidentialPardonForm("Elon");
		Bureaucrat b = Bureaucrat("Jeff", 2);
		Bureaucrat c = Bureaucrat("Elon", 150);
		b.executeForm(*form);
		b.signForm(*form);
		b.executeForm(*form);
		c.signForm(*form);
		delete form;
	}
}