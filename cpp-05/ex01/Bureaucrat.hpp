/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 02:47:56 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/22 03:51:19 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include <string>
#include <exception>

class Form;

class Bureaucrat
{
	private:
		const std::string _name;
		int	_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat & other);
		Bureaucrat & operator=(Bureaucrat & other);
		const std::string getName() const;
		int	getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void isGradePassable(int grade);
		void signForm(Form &form);
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
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);
#endif