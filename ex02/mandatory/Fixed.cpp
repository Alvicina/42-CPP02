/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:44:17 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/28 12:37:55 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	_fixedPoint = 0;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& a)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed::Fixed(const int num)
{
	//std::cout << "Int constructor called" << std::endl;
	_fixedPoint = num << _fractBits;
}

Fixed::Fixed(const float num)
{
	//std::cout << "Float constructor called" << std::endl;
	_fixedPoint = std::roundf(num * (1 << _fractBits));
}

int		Fixed::getRawBits(void) const
{
	return (_fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	_fixedPoint = raw;
}

Fixed& Fixed::operator=(const Fixed& a)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
		_fixedPoint = a.getRawBits();
	return *this;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->getRawBits())/(1 << _fractBits));
}

int		Fixed::toInt(void) const
{
	return (_fixedPoint >> _fractBits);
}

//------comparison operators------//
bool	Fixed::operator>(const Fixed& a) const
{
	return (this->getRawBits() > a.getRawBits());
}

bool	Fixed::operator<(const Fixed& a) const
{
	return (this->getRawBits() < a.getRawBits());
}

bool	Fixed::operator>=(const Fixed& a)
{
	return (this->getRawBits() >= a.getRawBits());
}

bool	Fixed::operator<=(const Fixed& a)
{
	return (this->getRawBits() <= a.getRawBits());
}

bool	Fixed::operator==(const Fixed& a)
{
	return (this->getRawBits() == a.getRawBits());
}

bool	Fixed::operator!=(const Fixed& a)
{
	return (this->getRawBits() != a.getRawBits());
}

//------arithmetic operators------//
Fixed	Fixed::operator+(const Fixed& a)
{
	return Fixed(this->toFloat() + a.toFloat());
}
		
Fixed	Fixed::operator-(const Fixed& a)
{
	return Fixed(this->toFloat() - a.toFloat());
}

Fixed	Fixed::operator*(const Fixed& a)
{
	return Fixed(this->toFloat() * a.toFloat());
}

Fixed	Fixed::operator/(const Fixed& a)
{
	return Fixed(this->toFloat() / a.toFloat());
}

//------increment & decrement operators------//
Fixed&	Fixed::operator++(void)
{
	_fixedPoint = ++_fixedPoint;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	_fixedPoint = ++_fixedPoint;
	return (tmp);
}

Fixed&	Fixed::operator--(void)
{
	_fixedPoint = --_fixedPoint;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	_fixedPoint = --_fixedPoint;
	return (tmp);
}

//------min & max members------//
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

const	Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (a);
	else
		return (b);
}