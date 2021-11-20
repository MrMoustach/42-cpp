/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:37:22 by zed               #+#    #+#             */
/*   Updated: 2021/11/20 18:14:33 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _value;
		static const int	_n_bits = 8;
	public:
		Fixed ();
		Fixed (const Fixed &f);
		Fixed (const int n);
		Fixed (const float n);
		~Fixed ();
		Fixed & operator = (const Fixed &f);
		void setRawBits(int const raw);
		int	getRawBits(void) const;
		int	toInt(void) const;
		float toFloat(void) const;
};

std::ostream& operator<< (std::ostream& os, const Fixed& f);