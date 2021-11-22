/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 03:13:27 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/23 00:11:23 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{
		Intern intern = Intern();
		Bureaucrat b = Bureaucrat("Jack", 2);
		Form * scf = intern.makeForm("shrubbery creation", "house");
		b.signForm(*scf);
	}
	{
		Intern intern = Intern();
		Bureaucrat b = Bureaucrat("Jack", 2);
		Form * scf = intern.makeForm("robotomy request", "elon");
		b.signForm(*scf);
	}
	{
		Intern intern = Intern();
		Bureaucrat b = Bureaucrat("Jack", 2);
		Form * scf = intern.makeForm("Presidential pardon", "elon");
		b.signForm(*scf);
	}
	{
		Intern intern = Intern();
		Bureaucrat b = Bureaucrat("Jack", 2);
		Form * scf = intern.makeForm("b-13", "elon");
		(void)scf;
	}
}