/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 21:16:30 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/22 00:13:44 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
#include <iostream>

class Animal
{
	protected:
		std::string _type;
		Animal();
	public:
		virtual ~Animal();
		Animal(const Animal & other);
		Animal & operator=(Animal & other);
		Animal * operator=(Animal * other);
		virtual void makeSound() const = 0;
		std::string getType() const;
};
#endif