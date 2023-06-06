/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:41:38 by rstride           #+#    #+#             */
/*   Updated: 2023/06/06 10:59:41 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H // Si FIXED_H n'a pas été défini
#define FIXED_H // Définir FIXED_H

#include <iostream> // Pour utiliser std::cout
#include <cmath> // Pour utiliser roundf (arrondir un float)

// Déclaration de la classe Fixed
class Fixed {
public:
	// Constructeur par défaut
	Fixed();

	// Constructeur qui prend un int comme paramètre
	Fixed(const int num);

	// Constructeur qui prend un float comme paramètre
	Fixed(const float num);

	// Destructeur
	~Fixed();

	// Constructeur de copie
	Fixed(Fixed const &fixed);

	// Surcharge de l'opérateur d'affectation
	Fixed &operator=(const Fixed &ref);

	// Retourne la valeur brute (non échelonnée)
	int getRawBits(void) const;

	// Modifie la valeur brute (non échelonnée)
	void setRawBits(const int raw);

	// Convertit la valeur fixée à un float
	float toFloat(void) const;

	// Convertit la valeur fixée à un int
	int toInt(void) const;

private:
	// La valeur fixe
	int value;

	// Le nombre de bits utilisé pour le fractionnaire
	const static int bitCount = 8;
};

// Surcharge de l'opérateur << pour pouvoir imprimer l'objet Fixed avec std::cout
std::ostream& operator<<(std::ostream &outputStream, const Fixed &ref);

#endif // Fin de la vérification de FIXED_H
