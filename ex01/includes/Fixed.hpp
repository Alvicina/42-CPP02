/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 10:45:06 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/27 17:27:41 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fixedPoint;
		static const int	_fractBits = 8;
	public:	
		Fixed();
		Fixed(const Fixed& a);
		Fixed(const int	num);
		Fixed(const float num);
		~Fixed();
		Fixed& operator=(const Fixed& a);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;			
};

std::ostream& operator<<(std::ostream& o, Fixed const& i);

#endif