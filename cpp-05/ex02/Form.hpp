/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 03:23:24 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/22 22:35:41 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string _name;
		const std::string _target;
		const int _signGrade;
		const int _execGrade;
		bool _signed;
	public:
		Form();
		Form(std::string name, std::string target, int signGrade, int execGrade);
		Form(const Form &other);
		virtual ~Form();
		Form& operator=(const Form &f);
		std::string getName() const;
		std::string getTarget() const;
		int getSignGrade() const;
		int getExecGrade() const;
		bool getSigned() const;
		void beSigned(Bureaucrat &bureaucrat);
		void isGradePassable(int grade);
		virtual void execute(Bureaucrat const & executor) const = 0;
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException();
				const char* what() const throw ();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException();
				const char* what() const throw ();
		};
		class FormNotSignedException : public std::exception
		{
			public:
				FormNotSignedException();
				const char* what() const throw ();
		};
};
std::ostream& operator<<(std::ostream& os, const Form& f);
#endif