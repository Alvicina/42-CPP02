/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:12:34 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/29 15:45:24 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

int	main(void)
{
	if (bsp(Point(-100,0), Point(10,30), Point(20,0), Point(5,15)) == true)
	{
		std::cout << "The point is INSIDE de triangle" << std::endl;
	}
	else
	{
		std::cout << "The point is OUTSIDE the triangle" << std::endl;
	}
	return (0);
}