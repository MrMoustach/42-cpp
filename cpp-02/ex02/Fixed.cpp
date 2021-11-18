/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharchi <iharchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:40:03 by zed               #+#    #+#             */
/*   Updated: 2021/11/18 04:43:52 by iharchi          ###   ########.fr       */
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
	_value = 0;
	_n_bits = 8;
}

Fixed::Fixed(const Fixed &f)
{
	_n_bits = 8;
	_value = f.getRawBits();
}

Fixed::Fixed(const int n)
{
	_n_bits = 8;
	_value = roundf(n * ft_pow(2, _n_bits));
}

Fixed::Fixed(const float n)
{
	_n_bits = 8;
	_value = roundf(n * ft_pow(2, _n_bits));
}

Fixed & Fixed::operator = (const Fixed &f)
{
	if (this != &f)
		_value = f.getRawBits();
	return *this;
}

Fixed & Fixed::operator + (const Fixed &f)
{
	_value = roundf((this->toFloat() + f.toFloat()) * ft_pow(2, _n_bits));
	return *this;
}

Fixed & Fixed::operator - (const Fixed &f)
{
	_value = roundf((this->toFloat() - f.toFloat()) * ft_pow(2, _n_bits));
	return *this;
}

Fixed & Fixed::operator / (const Fixed &f)
{
	_value = roundf((this->toFloat() / f.toFloat()) * ft_pow(2, _n_bits));
	return *this;
}

Fixed & Fixed::operator * (const Fixed &f)
{
	_value = roundf((this->toFloat() * f.toFloat()) * ft_pow(2, _n_bits));
	return *this;
}

Fixed & Fixed::operator++()
{
	_value = roundf((this->toFloat() + 0.00390625) * ft_pow(2, _n_bits));
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return tmp;
}

Fixed & Fixed::operator--()
{
	_value = roundf((this->toFloat() - 0.00390625) * ft_pow(2, _n_bits));
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return tmp;
}

Fixed::~Fixed()
{
}

int	Fixed::getRawBits() const
{
	return _value;
}

void Fixed::setRawBits(int const raw) 
{
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

Fixed & Fixed::max(Fixed & f1, Fixed & f2)
{
	if (f1.toFloat() > f2.toFloat())
		return f1;
	return f2;
}

const Fixed Fixed::max(const Fixed f1, const Fixed f2)
{
	if (f1.toFloat() > f2.toFloat())
		return f1;
	return f2;
}