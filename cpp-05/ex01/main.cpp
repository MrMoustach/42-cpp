/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 03:13:27 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/22 03:55:13 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	{
		Form form = Form("C-28", 3, 1);
		Form form2 = Form("B-28", 9, 1);
		Bureaucrat bureaucrat = Bureaucrat("jim", 5);
		
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
		bureaucrat.signForm(form2);
		std::cout << form2 << std::endl;
	}
	{
		try
		{
			Form form = Form("C-28", 0, 1);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		try
		{
			Form form = Form("C-28", 3, 151);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}