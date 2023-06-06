/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:08:41 by rstride           #+#    #+#             */
/*   Updated: 2023/06/06 10:55:41 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructeur par défaut: il est appelé lorsqu'un objet de la classe Fixed est créé sans paramètres.
Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;  // Affiche un message à la console.
	fixedNum = 0;  // Initialise la variable membre fixedNum à 0.
}

// Destructeur: il est appelé automatiquement lorsque l'objet sort de la portée ou est explicitement supprimé.
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;  // Affiche un message à la console.
}

// Constructeur de copie: il est appelé lorsqu'un nouvel objet est créé à partir d'un autre objet de la même classe.
Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;  // Affiche un message à la console.
	fixedNum = fixed.fixedNum;  // Copie la valeur de fixedNum de l'objet passé en paramètre à la nouvelle instance.
}

// Surcharge de l'opérateur d'affectation: il est utilisé pour copier toutes les variables membres d'un objet à un autre.
Fixed Fixed::operator=(Fixed &ref)
{
	std::cout << "Assignment operator called" << std::endl;  // Affiche un message à la console.
	this->fixedNum = ref.fixedNum;  // Copie la valeur de fixedNum de l'objet passé en paramètre à l'objet courant.
	return *this;  // Renvoie une référence à l'objet courant.
}

// Fonction membre pour récupérer la valeur de fixedNum.
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;  // Affiche un message à la console.
	return (fixedNum);  // Renvoie la valeur actuelle de fixedNum.
}

// Fonction membre pour définir la valeur de fixedNum.
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;  // Affiche un message à la console.
	fixedNum = raw;  // Affecte la valeur de raw à fixedNum.
}
