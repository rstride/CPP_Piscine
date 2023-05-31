/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:41:38 by rstride           #+#    #+#             */
/*   Updated: 2023/05/31 13:42:40 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H
#include <iostream>
#include <cmath>

class Fixed{
public:
	Fixed();
    
	Fixed(const int num);

	Fixed(const float num);

	~Fixed();
	Fixed(Fixed const &fixed);


	Fixed &operator=(const Fixed &ref);

	int getRawBits(void) const;

	void setRawBits(const int raw);

	float toFloat(void) const;

	int toInt(void) const;



private:
	int value;

	 const static int bitCount = 8;

};

std::ostream& operator<<(std::ostream &outputStream, const Fixed &ref);


#endif