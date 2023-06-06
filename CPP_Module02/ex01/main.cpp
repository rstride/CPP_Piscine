/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:13:28 by rstride           #+#    #+#             */
/*   Updated: 2023/06/06 11:05:37 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    // Crée un objet "a" en utilisant le constructeur par défaut de la classe Fixed
	Fixed a;
	
	// Crée un objet "b" en utilisant le constructeur qui prend un entier comme argument
	Fixed const b(10);
	
	// Crée un objet "c" en utilisant le constructeur qui prend un flottant comme argument
	Fixed const c(42.42f);
	
	// Crée un objet "d" en utilisant le constructeur de copie avec "b" comme argument
	Fixed const d(b);
	
	// Utilise l'opérateur d'affectation pour assigner une nouvelle valeur à "a"
	a = Fixed(1234.4321f);
	
	// Affiche la valeur de "a" en tant que flottant
	std::cout << "a is " << a << std::endl;
	
	// Affiche la valeur de "b" en tant que flottant
	std::cout << "b is " << b << std::endl;
	
	// Affiche la valeur de "c" en tant que flottant
	std::cout << "c is " << c << std::endl;
	
	// Affiche la valeur de "d" en tant que flottant
	std::cout << "d is " << d << std::endl;
	
	// Affiche la valeur de "a" convertie en entier
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	
	// Affiche la valeur de "b" convertie en entier
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	
	// Affiche la valeur de "c" convertie en entier
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	
	// Affiche la valeur de "d" convertie en entier
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;
}
