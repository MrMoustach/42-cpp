/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 22:29:01 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/21 02:41:11 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP
# define CLAP_TRAP
#include <iostream>
#include <string>

class ClapTrap{
	protected:
		std::string _name;
		int	_hp;
		int	_energy;
		int	_ad;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap & ct);
		~ClapTrap();
		ClapTrap& operator=(ClapTrap ct);
		std::string& getName();
		int	getHp() const;
		int	getEnergy() const;
		int	getAd() const;
		void setName(std::string name);
		void setHp(int hp);
		void setEnergy(int energy);
		void setAd(int ad);
		void attack(std::string & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
#endif
