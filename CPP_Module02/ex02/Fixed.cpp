/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:41:18 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:48:42 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Surcharge de l'opérateur de flux de sortie pour imprimer une instance de Fixed
std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    // Convertit la valeur en flottant avant de l'imprimer
	out << value.toFloat();
	return out;
}

// Constructeur par défaut
Fixed::Fixed(void)
{
    // Initialise la valeur à 0
	value = 0;
}

// Constructeur qui accepte un entier
Fixed::Fixed(int num)
{
    // Décale l'entier de "bitCount" vers la gauche
	value = num << bitCount;
}

// Constructeur qui accepte un flottant
Fixed::Fixed(const float num)
{
    // Arrondit le produit de num et de 2^bitCount
	value = roundf(num * (1 << Fixed::bitCount));
}

// Constructeur de copie
Fixed::Fixed(Fixed const &ref)
{
    // Utilise l'opérateur d'affectation pour copier la valeur de l'autre instance
	*this = ref;
}

// Destructeur
Fixed::~Fixed(void)
{
    // Ne fait rien ici, mais pourrait être utilisé pour libérer des ressources si nécessaire
}

// Récupère la valeur brute sous-jacente
int Fixed::getRawBits(void) const
{
	return value;
}

// Définit la valeur brute sous-jacente
void Fixed::setRawBits(int const raw)
{
	value = raw;
}

// Convertit la valeur fixe en flottant
float Fixed::toFloat(void) const
{
	return ((float)(this->value / (float)(1 << bitCount)));
}

// Convertit la valeur fixe en entier
int Fixed::toInt(void) const
{
	return (this->value >> bitCount);
}

// Opérateur d'affectation
Fixed &Fixed::operator=(const Fixed &ref)
{
    // Affecte la valeur de l'autre instance à cette instance
	this->value = ref.value;
	return *this;
}

// Comparaison pour savoir si cette instance est supérieure à une autre
bool Fixed::operator>(const Fixed &ref)
{
	return ((value > ref.value) ? true : false);
}

// Comparaison pour savoir si cette instance est inférieure à une autre
bool Fixed::operator<(const Fixed &ref)
{
	return ((value < ref.value) ? true : false);
}

// Comparaison pour savoir si cette instance est supérieure ou égale à une autre
bool Fixed::operator>=(const Fixed &ref)
{
	return ((value >= ref.value) ? true : false);
}

// Comparaison pour savoir si cette instance est inférieure ou égale à une autre
bool Fixed::operator<=(const Fixed &ref)
{
	return ((value <= ref.value) ? true : false);
}

// Comparaison pour savoir si cette instance est égale à une autre
bool Fixed::operator==(const Fixed &ref)
{
	return ((value == ref.value) ? true : false);
}

// Comparaison pour savoir si cette instance est différente d'une autre
bool Fixed::operator!=(const Fixed &ref)
{
	return ((value != ref.value) ? true : false);
}

// Additionne cette instance à une autre
Fixed Fixed::operator+(const Fixed &ref)
{
	Fixed tmp(value + ref.value);
	return (tmp);
}

// Soustrait une autre instance de cette instance
Fixed Fixed::operator-(const Fixed &ref)
{
	Fixed tmp(value - ref.value);
	return (tmp);
}

// Multiplie cette instance par une autre
Fixed Fixed::operator*(const Fixed &ref)
{
	Fixed tmp(this->toFloat() * ref.toFloat());
	return (tmp);
}

// Divise cette instance par une autre
Fixed Fixed::operator/(const Fixed &ref)
{
	Fixed tmp(value / ref.value);
	return (tmp);
}

// Incrémente cette instance (préfixe)
Fixed Fixed::operator++()
{
	value++;
	return (*this);
}

// Incrémente cette instance (postfixe)
const Fixed Fixed::operator++(int)
{
	Fixed	tmp = *this;
	value++;
	return (tmp);
}

// Décrémente cette instance (préfixe)
Fixed Fixed::operator--()
{
	value--;
	return (*this);
}

// Décrémente cette instance (postfixe)
const Fixed Fixed::operator--(int)
{
	Fixed	tmp = *this;
	value--;
	return (tmp);
}

// Renvoie l'instance la plus petite de deux instances
Fixed Fixed::min(const Fixed &ref1, const Fixed &ref2)
{
	if (ref1.getRawBits() < ref2.getRawBits())
		return (ref1);
	else if (ref1.getRawBits() == ref2.getRawBits())
		return (ref1);
	else
		return (ref2);
}

// Renvoie l'instance la plus grande de deux instances
Fixed Fixed::max(const Fixed &ref1, const Fixed &ref2)
{
	if (ref1.getRawBits() > ref2.getRawBits())
		return (ref1);
	else if (ref1.getRawBits() == ref2.getRawBits())
		return (ref1);
	else
		return (ref2);
}
