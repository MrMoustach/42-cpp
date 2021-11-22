/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 03:32:08 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/22 22:32:05 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _signGrade(150), _execGrade(150){}
Form::Form(std::string name, std::string target, int signGrade, int execGrade) : _name(name), _target(target), _signGrade(signGrade), _execGrade(execGrade), _signed(false)
{
	isGradePassable(signGrade);
	isGradePassable(execGrade);
}
Form::Form(const Form &other) : _name(other.getName()), _target(other.getTarget()), _signGrade(other.getSignGrade()), _execGrade(other.getExecGrade()), _signed(other.getSigned()){}
Form::~Form(){}

Form& Form::operator=(const Form &f)
{
	if (this != &f)
	{
		_signed = f.getSigned();
	}
	return *this;
}

std::string Form::getName() const
{
	return _name;
}
std::string Form::getTarget() const
{
	return _target;
}
int Form::getSignGrade() const
{
	return _signGrade;
}
int Form::getExecGrade() const
{
	return _execGrade;
}
bool Form::getSigned() const
{
	return _signed;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _signGrade)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

void Form::execute(Bureaucrat const & executor) const
{
	if (!_signed)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > _execGrade)
		throw Form::GradeTooLowException();
}

void Form::isGradePassable(int grade)
{
	if (grade > 150)
		throw Form::GradeTooLowException();
	if (grade < 1)
		throw Form::GradeTooHighException();
}
std::ostream& operator<<(std::ostream& os, const Form& f)
{
	os << f.getName() << ", Signing grade " << f.getSignGrade() << ", Execution grade " << f.getExecGrade();
	if (f.getSigned())
		os << " Signed";
	else
		os << " Unsigned";
	return os;
}

Form::GradeTooHighException::GradeTooHighException(){}
const char* Form::GradeTooHighException::what() const throw ()
{
	return "The grade is too high.";
}

Form::GradeTooLowException::GradeTooLowException(){}
const char* Form::GradeTooLowException::what() const throw ()
{
	return "The grade is too low.";
}

Form::FormNotSignedException::FormNotSignedException(){}
const char* Form::FormNotSignedException::what() const throw ()
{
	return "This form is not signed";
}
