/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 10:45:06 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/28 12:26:59 by alvicina         ###   ########.fr       */
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
		int				getRawBits(void) const;
		void			setRawBits(int const raw);
		float			toFloat(void) const;
		int				toInt(void) const;
		static			Fixed& min(Fixed& a, Fixed& b);
		static const 	Fixed& min(const Fixed& a, const Fixed& b);
		static			Fixed& max(Fixed& a, Fixed& b);
		static const	Fixed& max(const Fixed& a, const Fixed& b);
		Fixed&			operator=(const Fixed& a);
		bool			operator>(const Fixed& a) const;
		bool			operator<(const Fixed& a) const;
		bool			operator>=(const Fixed& a);
		bool			operator<=(const Fixed& a);
		bool			operator==(const Fixed& a);
		bool			operator!=(const Fixed& a);
		Fixed			operator+(const Fixed& a);
		Fixed			operator-(const Fixed& a);
		Fixed			operator*(const Fixed& a);
		Fixed			operator/(const Fixed& a);
		Fixed&			operator++(void);
		Fixed			operator++(int);
		Fixed&			operator--(void);
		Fixed			operator--(int);	
};

std::ostream& operator<<(std::ostream& o, Fixed const& i);

#endif