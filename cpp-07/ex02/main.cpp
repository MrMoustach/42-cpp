/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:03:18 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/24 15:33:02 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    {
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
	}
	{
		Array<int> numbers(10);
		for (int i = 0; i < 10; i++)
			numbers[i] = i;
		try
		{
			numbers[30] = 10;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		for (int i = 0; i < 10; i++)
			std::cout << numbers[i] << std::endl;
		std::cout << "--------------------------" << std::endl;
		Array<int> test = numbers;
		std::cout << test.size() << std::endl;
		std::cout << "--------------------------" << std::endl;
		for (int i = 0; i < 10; i++)
			std::cout << test[i] << std::endl;
	}
    return 0;
}