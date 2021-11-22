/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:08:23 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/23 00:09:03 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOT_H
#define ROBOT_H

#include "Form.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm & f);
		RobotomyRequestForm & operator=(const RobotomyRequestForm & f);
		virtual void execute(Bureaucrat const & executor) const;
		static Form *create(const std::string target);
};
#endif