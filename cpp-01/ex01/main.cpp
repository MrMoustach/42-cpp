/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:54:56 by iharchi           #+#    #+#             */
/*   Updated: 2021/10/11 17:54:57 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name);

int	main()
{
	Zombie* zombies;
	const int N = 5;
	zombies = zombieHorde(N, "Louis");
	for (int i = 0; i < N; i++)
	{
		zombies[i].announce();
		zombies[i].~Zombie();
	}
}