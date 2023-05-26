/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:08:41 by rstride           #+#    #+#             */
/*   Updated: 2023/05/26 16:08:56 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	fixedNum = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;

}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	fixedNum = fixed.fixedNum;
}

Fixed Fixed::operator=(Fixed &ref)
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedNum = ref.fixedNum;
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixedNum);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "Default constructor called" << std::endl;
	fixedNum = raw;
}