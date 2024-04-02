/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:30:43 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/02 12:48:44 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Point::Point()
{
	
}

Point::Point(const Point& a)
{
	*this = a;
}

Point& Point::operator=(const Point& a)
{
	if (this != &a)
	{
		this->~Point();
		new (this) Point(a);
	}
	return (*this);
}

Point::Point(const float x, const float y)	: _x(x), _y(y)
{
	
}

Point::~Point()
{
	
}

Fixed	Point::getX(void) const
{
	return (_x);
}

Fixed	Point::getY(void) const 
{
	return (_y);
}