/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:41:38 by rstride           #+#    #+#             */
/*   Updated: 2023/05/31 13:45:14 by rstride          ###   ########.fr       */
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

	int getRawBits(void) const;

	void setRawBits(const int raw);

	float toFloat(void) const;

	int toInt(void) const;

	Fixed &operator=(const Fixed &ref);

	bool operator>(const Fixed &ref);
	bool operator<(const Fixed &ref);
	bool operator>=(const Fixed &ref);
	bool operator<=(const Fixed &ref);
	bool operator==(const Fixed &ref);
	bool operator!=(const Fixed &ref);

	Fixed operator+(const Fixed &ref);
	Fixed operator-(const Fixed &ref);
	Fixed operator*(const Fixed &ref);
	Fixed operator/(const Fixed &ref);

	Fixed operator++();
	const Fixed operator++(int);
	Fixed operator--();
	const Fixed operator--(int);

	static Fixed min(const Fixed &ref1, const Fixed &ref2);
	static Fixed max(const Fixed &ref1, const Fixed &ref2);

private:
	int value;

	 const static int bitCount = 8;
};

std::ostream& operator<<(std::ostream &outputStream, const Fixed &ref);


#endif