/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:13:41 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:49:13 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>
#include "Fixed.hpp"

// classes

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;

	public:
	// Constructors
		Point();
		Point(const float x, const float y);
		Point(const Point& copy);

	// Deconstructors
		~Point();

	// Overloaded Operators
		Point &operator=(const Point &src);

	// Public Methods

	// Getter
		const Fixed &getX(void)const;
		const Fixed &getY(void)const;
	// Setter

};

// Overload for ostream
std::ostream	&operator<<(std::ostream &o, Point const point);