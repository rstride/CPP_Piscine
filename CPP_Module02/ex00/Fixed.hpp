/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:09:05 by rstride           #+#    #+#             */
/*   Updated: 2023/05/26 16:09:16 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H
#include <iostream>

class Fixed{
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& fixed);

	Fixed operator=(Fixed &ref);

	int getRawBits(void) const;

	void setRawBits(int const raw);
	
private:
	int fixedNum;

	 const static int bitNum = 8;
};

#endif