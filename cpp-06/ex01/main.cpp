/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:04:23 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/24 11:12:46 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct s_Data
{
	int a;
	char b;
	float c;
}				Data;

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data * deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	Data * data = new Data();

	data->a = 42;
	data->b = 'a';
	data->c = 420.0f;
	std::cout << "Before serialization" << std::endl;
	std::cout << data->a << std::endl;
	std::cout << data->b << std::endl;
	std::cout << data->c << std::endl;
	std::cout << data << std::endl;
	uintptr_t raw = serialize(data);
	Data * newData = deserialize(raw);
	std::cout << "After deserialization" << std::endl;
	std::cout << newData->a << std::endl;
	std::cout << newData->b << std::endl;
	std::cout << newData->c << std::endl;
	std::cout << newData << std::endl;
}