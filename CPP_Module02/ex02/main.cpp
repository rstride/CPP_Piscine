/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:13:28 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:48:48 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    // Crée une nouvelle instance de Fixed avec le constructeur par défaut
	Fixed a;

    // Crée une nouvelle instance constante de Fixed en multipliant deux autres instances de Fixed
	Fixed const b(Fixed(5.05f) * Fixed(2));

    // Imprime la première instance de Fixed
	std::cout << a << std::endl;

    // Incrémente la première instance de Fixed, puis l'imprime
	std::cout << ++a << std::endl;

    // Imprime à nouveau la première instance de Fixed (maintenant incrémentée)
	std::cout << a << std::endl;

    // Incrémente à nouveau la première instance de Fixed, mais cette fois en utilisant l'opérateur de postfixe, puis l'imprime
	std::cout << a++ << std::endl;

    // Imprime à nouveau la première instance de Fixed (maintenant incrémentée deux fois)
	std::cout << a << std::endl;

    // Imprime la seconde instance constante de Fixed
	std::cout << b << std::endl;

    // Imprime le maximum entre les deux instances de Fixed
	std::cout << Fixed::max(a, b) << std::endl;

	return 0;
}
