/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:08:43 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/22 23:50:50 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <unistd.h>
RobotomyRequestForm::RobotomyRequestForm() : Form("Robot my request", "empty", 72, 45) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robot my request", target, 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : Form(other) {}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &other) 
{
	Form::operator = (other);
	
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	
	std::srand(std::time(nullptr));
    int r = std::rand();
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Bzzzz... " << std::endl;
		usleep(1000000);
	}
	if (r % 10 > 5) {
		std::cout << Form::getTarget() << " Has been robotomized successfully" << std::endl;
	} else {
		std::cout << "Proccess failed" << std::endl;
	}
}

Form *RobotomyRequestForm::create(const std::string target)
{
  return new RobotomyRequestForm(target);
}
