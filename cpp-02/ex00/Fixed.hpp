/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:37:22 by zed               #+#    #+#             */
/*   Updated: 2021/11/17 13:48:18 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	private:
		int _value;
		int	_n_bits;
	public:
		Fixed ();
		Fixed (const Fixed &f);
		~Fixed ();
		Fixed & operator = (const Fixed &f);
		void setRawBits(int const raw);
		int	getRawBits(void) const;
};