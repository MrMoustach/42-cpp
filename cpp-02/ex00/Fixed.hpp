/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:37:22 by zed               #+#    #+#             */
/*   Updated: 2021/11/20 18:14:52 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	private:
		int _value;
		static const int	_n_bits = 8;
	public:
		Fixed ();
		Fixed (const Fixed &f);
		~Fixed ();
		Fixed & operator = (const Fixed &f);
		void setRawBits(int const raw);
		int	getRawBits(void) const;
};