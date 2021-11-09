/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:35:06 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/09 18:44:55 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string		_name;
		Weapon*	_weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon& weapon);
		void	attack();
};