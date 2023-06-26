/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:09:05 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:45:11 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H  // Vérifie si FIXED_H n'a pas déjà été défini, afin d'éviter les inclusions multiples.
#define FIXED_H  // Définit FIXED_H pour indiquer que ce fichier a été inclus.

#include <iostream>  // Inclut la bibliothèque iostream pour utiliser std::cout etc.

// Déclare une classe appelée Fixed.
class Fixed {
public:
	// Déclare un constructeur par défaut pour la classe Fixed.
	Fixed();

	// Déclare un destructeur pour la classe Fixed.
	~Fixed();

	// Déclare un constructeur de copie pour la classe Fixed.
	Fixed(const Fixed& fixed);

	// Surcharge l'opérateur d'affectation pour la classe Fixed.
	Fixed operator=(Fixed &ref);

	// Déclare une fonction membre constante getRawBits qui renvoie un entier.
	int getRawBits(void) const;

	// Déclare une fonction membre setRawBits qui prend un entier en paramètre et ne renvoie rien.
	void setRawBits(int const raw);
	
private:
	// Déclare une variable membre private, fixedNum.
	int fixedNum;

	// Déclare une constante statique bitNum et lui attribue la valeur 8.
	const static int bitNum = 8;
};

#endif  // Fin de la condition #ifndef, correspondant à l'instruction #define FIXED_H au début du fichier.
