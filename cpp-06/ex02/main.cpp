/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:20:42 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/24 11:35:57 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.cpp"
#include "B.cpp"
#include "C.cpp"
#include <time.h>

Base * generate()
{
	srand(time(NULL));
	int ran = rand() % 3;
	switch (ran)
	{
		case 0:
			return (new A());
			break;
		case 1:
			return (new B());
			break;
		case 2:
			return (new C());
			break;
	}
	return (new A());
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Base" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A d = dynamic_cast<A&>(p);
		(void)d;
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{}
	try
	{
		B d = dynamic_cast<B&>(p);
		(void)d;
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e)
	{}
	try
	{
		C d = dynamic_cast<C&>(p);
		(void)d;
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e)
	{}
}

int main()
{
	Base * b = generate();
	std::cout << "Identifying from pointer : " << std::endl;
	identify(b);
	std::cout << "Identifying from reference : " << std::endl;
	identify(*b);
	return (0);
}