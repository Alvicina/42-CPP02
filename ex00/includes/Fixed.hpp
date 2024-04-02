/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 10:45:06 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/27 12:45:43 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
	private:
		int					_fixedPoint;
		static const int	_fractBits = 8;
	public:	
		Fixed();
		Fixed(const Fixed& a);
		~Fixed();
		Fixed& operator=(const Fixed& a);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);					
};

#endif