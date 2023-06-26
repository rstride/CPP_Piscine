/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:41:18 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:48:19 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp" 

// Le constructeur par défaut. Lorsqu'un nouvel objet de type Fixed est créé sans arguments, cette méthode est appelée.
Fixed::Fixed(void) 
{
	std::cout << "Default constructor called" << std::endl; // Affiche un message à la console
	value = 0; // Initialise la valeur fixe à 0
}

// Un constructeur qui prend un entier en argument. Il est utilisé lorsqu'un nouvel objet Fixed est créé avec un entier.
Fixed::Fixed(int num) 
{
	std::cout << "Int constructor called" << std::endl; // Affiche un message à la console
	value = num << bitCount; // Convertit l'entier en une valeur fixe en décalant les bits vers la gauche
}

// Un constructeur qui prend un flottant en argument. Il est utilisé lorsqu'un nouvel objet Fixed est créé avec un flottant.
Fixed::Fixed(const float num) 
{
	std::cout << "Float constructor called" << std::endl; // Affiche un message à la console
	value = roundf(num * (1 << Fixed::bitCount)); // Convertit le flottant en une valeur fixe en multipliant par 2^bitCount et en arrondissant
}

// Le constructeur de copie. Il est utilisé lorsqu'un nouvel objet Fixed est créé à partir d'un autre objet Fixed existant.
Fixed::Fixed(Fixed const &ref) 
{
	std::cout << "Copy constructor called" << std::endl; // Affiche un message à la console
	*this = ref; // Utilise l'opérateur d'affectation pour copier la valeur de l'objet référencé
}

// Le destructeur. Il est appelé lorsque l'objet Fixed est détruit.
Fixed::~Fixed(void) 
{
	std::cout << "Destructor called" << std::endl; // Affiche un message à la console
}

// Surcharge de l'opérateur d'affectation. Il est utilisé pour copier la valeur d'un objet Fixed à un autre.
Fixed &Fixed::operator=(const Fixed &ref) 
{
	std::cout << "Assignation operator called" << std::endl; // Affiche un message à la console
	value = ref.value; // Copie la valeur de l'objet référencé
	return (*this); // Renvoie une référence à l'objet lui-même, permettant les affectations en chaîne
}

// Méthode pour obtenir la valeur brute actuelle de l'objet Fixed.
int Fixed::getRawBits(void) const 
{
	std::cout << "getRawBits member function called" << std::endl; // Affiche un message à la console
	return (value); // Renvoie la valeur actuelle
}

// Méthode pour définir la valeur brute de l'objet Fixed.
void Fixed::setRawBits(int const raw) 
{
	std::cout << "Default constructor called" << std::endl; // Affiche un message à la console
	value = raw; // Affecte la nouvelle valeur à l'objet Fixed
}

// Méthode pour convertir la valeur fixe en flottant.
float Fixed::toFloat(void) const 
{
	return ((float)(this->value / (float)(1 << bitCount))); // Renvoie la valeur convertie en flottant
}

// Méthode pour convertir la valeur fixe en entier.
int Fixed::toInt(void) const 
{
	return (this->value >> bitCount); // Renvoie la valeur convertie en entier
}

// Surcharge de l'opérateur << pour afficher correctement un objet Fixed avec std::cout.
std::ostream &operator<<(std::ostream &out, Fixed const &value) 
{
	out << value.toFloat(); // Convertit la valeur fixe en flottant avant de l'afficher
	return (out); // Renvoie l'objet ostream pour permettre la concaténation
}
