/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:40:03 by zed               #+#    #+#             */
/*   Updated: 2021/11/18 04:15:13 by iharchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int setBit(int value, int position)
{
	int mask;

	mask = 1 << position;
	return (value | mask);
}

bool getBit(int value, int position)
{
	return (value & (1 << position));
}

int	ft_pow(int n, int power)
{
	if (power > 0)
		return (pow(n, power - 1));
	return (1);
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
	_n_bits = 8;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	_n_bits = 8;
	_value = f.getRawBits();
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	_n_bits = 8;
	_value = roundf(n * ft_pow(2, _n_bits));
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	_n_bits = 8;
	_value = roundf(n * ft_pow(2, _n_bits));
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
int	Fixed::toInt(void) const
{
	return ((float)_value) / ft_pow(2, _n_bits);
}

float Fixed::toFloat(void) const
{
	return ((float)_value) / ft_pow(2, _n_bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
	os << f.toFloat();
	return os;
}
