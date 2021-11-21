/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 21:34:02 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/21 23:59:57 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	int ARRAY_COUNT = 6;
	Animal *animals[ARRAY_COUNT];
	std::cout << "---------Filling the array---------" << std::endl;
	for (int i = 0; i < ARRAY_COUNT/2; i++)
	{
		Animal *t = new Cat();
		animals[i] = t;
	}
	for (int i = ARRAY_COUNT/2; i < ARRAY_COUNT; i++)
	{
		Animal *t = new Dog();
		animals[i] = t;
	}
	std::cout << "---------Testing the fill---------" << std::endl;
	for (int i = 0; i < ARRAY_COUNT; i++)
		animals[i]->makeSound();
	std::cout << "---------Calling destructors---------" << std::endl;
	for (int i = 0; i < ARRAY_COUNT; i++)
		delete animals[i];
	std::cout << "---------deep copy test---------" << std::endl;
	std::cout << "- Creating copies -" << std::endl;
	Cat *cat = new Cat();
	Cat *cat2 = new Cat(*cat);
	std::cout << "- Deleting copies -" << std::endl;
	delete cat;
	delete cat2;
	// Animal *t = new Animal();
	// delete t;
}