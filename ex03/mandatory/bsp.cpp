/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:30:56 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/28 18:58:08 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

static	Fixed	abs(Fixed a)
{
	std::cout << a << std::endl;
	if (a < 0)
		return (a * -1);
	else
		return (a);
}

static	Fixed	getArea(const Point& a, const Point& b, const Point& c)
{
	return (((a.getX() * (b.getY() - c.getY()))
			 + (b.getX() * (c.getY() - a.getY()))
			 + (c.getX() * (a.getY() - b.getY())))/2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	ABCarea = abs(getArea(a, b, c));
	Fixed	PBCarea = abs(getArea(point, b, c));
	Fixed	PABarea = abs(getArea(point, a, b));
	Fixed	PCAarea = abs(getArea(point, c, a));

	return (ABCarea == PBCarea + PABarea + PCAarea);
}