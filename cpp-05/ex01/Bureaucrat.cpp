/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 02:55:05 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/22 03:52:37 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _grade(150){}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	isGradePassable(grade);
	_grade = grade;
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat & other)
{
	isGradePassable(other.getGrade());
	_grade = other.getGrade();
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat & other)
{
	if (this != &other)
	{
		isGradePassable(other.getGrade());
		_grade = other.getGrade();
	}
	return *this;
}

const std::string Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	isGradePassable(_grade - 1);
	_grade--;
}

void Bureaucrat::decrementGrade()
{
	isGradePassable(_grade + 1);
	_grade++;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
	
}

void Bureaucrat::isGradePassable(int grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}
std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(){}
const char* Bureaucrat::GradeTooHighException::what() const throw ()
{
	return "The grade is too high.";
}

Bureaucrat::GradeTooLowException::GradeTooLowException(){}
const char* Bureaucrat::GradeTooLowException::what() const throw ()
{
	return "The grade is too low.";
}
