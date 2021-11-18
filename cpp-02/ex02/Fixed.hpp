/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:37:22 by zed               #+#    #+#             */
/*   Updated: 2021/11/18 04:37:58 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _value;
		int	_n_bits;
	public:
		Fixed ();
		Fixed (const Fixed &f);
		Fixed (const int n);
		Fixed (const float n);
		~Fixed ();
		Fixed & operator = (const Fixed &f);
		Fixed & operator + (const Fixed &f);
		Fixed & operator - (const Fixed &f);
		Fixed & operator * (const Fixed &f);
		Fixed & operator / (const Fixed &f);
		Fixed & operator++();
		Fixed operator++(int);
		Fixed & operator--();
		Fixed operator--(int);
		void setRawBits(int const raw);
		int	getRawBits(void) const;
		int	toInt(void) const;
		float toFloat(void) const;
		static Fixed & max(Fixed & f1, Fixed & f2);
		static const Fixed max(const Fixed f1, const Fixed f2);
};

std::ostream& operator<< (std::ostream& os, const Fixed& f);