/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:22:57 by iharchi           #+#    #+#             */
/*   Updated: 2021/11/21 22:40:24 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef BRAIN_H
# define BRAIN_H

class Brain
{
	private:
		std::string *_ideas;
	public:
		Brain();
		~Brain();
		Brain(const Brain & other);
		Brain & operator=(Brain & other);
		std::string* getIdeas() const;
		
};
#endif