/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:13:10 by rstride           #+#    #+#             */
/*   Updated: 2023/06/07 15:05:48 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Constructeur par défaut qui initialise _x et _y à 0
Point::Point(): _x(0), _y(0)
{
}

// Constructeur qui accepte deux flottants en paramètre pour initialiser _x et _y
Point::Point(const float x, const float y):_x(x), _y(y)
{
}

// Constructeur de copie qui copie les attributs du point cible dans le point actuel
Point::Point(const Point &copy): _x(copy.getX()), _y(copy.getY())
{
}

// Destructeur
Point::~Point()
{
}

// Surcharge de l'opérateur d'affectation qui copie les attributs du point source dans le point actuel
Point &Point::operator=(const Point &src)
{
	if (this == &src)
		return *this;
	return *this;
}

// Méthode qui renvoie la coordonnée x du point
const Fixed	&Point::getX(void)const
{
	return (this->_x);
}

// Méthode qui renvoie la coordonnée y du point
const Fixed	&Point::getY(void)const
{
	return (this->_y);
}

// Surcharge de l'opérateur << pour afficher les coordonnées x et y du point
std::ostream	&operator<<(std::ostream &o, Point const point)
{
	o << "_x: " << point.getX() << " / _y: " << point.getY() << std::endl;
	return (o);
}
