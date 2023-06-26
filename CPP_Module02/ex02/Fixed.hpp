/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:41:38 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:48:45 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H // Vérifie si FIXED_H n'est pas déjà défini pour éviter les inclusions multiples
#define FIXED_H // Définit FIXED_H

#include <iostream> // Inclut la bibliothèque iostream pour l'entrée/sortie
#include <cmath> // Inclut la bibliothèque cmath pour les opérations mathématiques

// Définit la classe Fixed
class Fixed{
public:
	// Déclare le constructeur par défaut
	Fixed();

	// Déclare un constructeur qui prend un entier en paramètre
	Fixed(const int num);

	// Déclare un constructeur qui prend un float en paramètre
	Fixed(const float num);

	// Déclare le destructeur
	~Fixed();

	// Déclare le constructeur de copie
	Fixed(Fixed const &fixed);

	// Déclare la méthode getRawBits qui renvoie la valeur brute sous-jacente
	int getRawBits(void) const;

	// Déclare la méthode setRawBits qui définit la valeur brute sous-jacente
	void setRawBits(const int raw);

	// Déclare la méthode toFloat qui convertit la valeur fixe en float
	float toFloat(void) const;

	// Déclare la méthode toInt qui convertit la valeur fixe en int
	int toInt(void) const;

	// Surcharge de l'opérateur d'affectation
	Fixed &operator=(const Fixed &ref);

	// Surcharge des opérateurs de comparaison
	bool operator>(const Fixed &ref);
	bool operator<(const Fixed &ref);
	bool operator>=(const Fixed &ref);
	bool operator<=(const Fixed &ref);
	bool operator==(const Fixed &ref);
	bool operator!=(const Fixed &ref);

	// Surcharge des opérateurs arithmétiques
	Fixed operator+(const Fixed &ref);
	Fixed operator-(const Fixed &ref);
	Fixed operator*(const Fixed &ref);
	Fixed operator/(const Fixed &ref);

	// Surcharge des opérateurs d'incrémentation et de décrémentation
	Fixed operator++();
	const Fixed operator++(int);
	Fixed operator--();
	const Fixed operator--(int);

	// Déclare les méthodes statiques min et max pour obtenir le min/max de deux objets Fixed
	static Fixed min(const Fixed &ref1, const Fixed &ref2);
	static Fixed max(const Fixed &ref1, const Fixed &ref2);

private:
	// Déclare une variable d'instance pour stocker la valeur fixe
	int value;

	// Déclare une constante statique pour définir le nombre de bits à utiliser pour la partie fractionnaire
	const static int bitCount = 8;
};

// Surcharge l'opérateur d'insertion dans le flux pour permettre l'affichage facile d'objets Fixed
std::ostream& operator<<(std::ostream &outputStream, const Fixed &ref);

#endif // Fin de la vérification de FIXED_H
