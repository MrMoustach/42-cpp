/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:40:03 by zed               #+#    #+#             */
/*   Updated: 2021/11/17 13:49:48 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
	_n_bits = 8;
}

Fixed::Fixed(const Fixed &f)
{
	// TODO: change this
	std::cout << "Copy constructor called" << std::endl;
	_value = f.getRawBits();
}

Fixed & Fixed::operator = (const Fixed &f)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &f)
		_value = f.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(int const raw) 
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}
