/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 03:13:27 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/22 03:18:59 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	{
		Bureaucrat bureaucrat = Bureaucrat("kafka", 3);
		try
		{
			std::cout << bureaucrat << std::endl;
			bureaucrat.incrementGrade();
			std::cout << bureaucrat << std::endl;
			bureaucrat.incrementGrade();
			std::cout << bureaucrat << std::endl;
			bureaucrat.incrementGrade();
			std::cout << bureaucrat << std::endl;
		} catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << bureaucrat << std::endl;
	}
	{
		Bureaucrat bureaucrat = Bureaucrat("Lucifer", 148);
		try
		{
			std::cout << bureaucrat << std::endl;
			bureaucrat.decrementGrade();
			std::cout << bureaucrat << std::endl;
			bureaucrat.decrementGrade();
			std::cout << bureaucrat << std::endl;
			bureaucrat.decrementGrade();
			std::cout << bureaucrat << std::endl;
		} catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << bureaucrat << std::endl;
	}
}