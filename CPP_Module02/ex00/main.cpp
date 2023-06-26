/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:13:28 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:48:10 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a; // Crée un nouvel objet 'a' de la classe Fixed en utilisant le constructeur par défaut.
	Fixed b(a); // Crée un nouvel objet 'b' de la classe Fixed en utilisant le constructeur de copie. 'b' est une copie de 'a'.
	Fixed c; // Crée un nouvel objet 'c' de la classe Fixed en utilisant le constructeur par défaut.

	c = b; // Utilise l'opérateur d'affectation pour copier toutes les variables membres de 'b' à 'c'.

	std::cout << a.getRawBits() << std::endl; // Affiche à la console la valeur de fixedNum de l'objet 'a' (qui devrait être 0, car c'est la valeur par défaut définie par le constructeur par défaut).
	std::cout << b.getRawBits() << std::endl; // Affiche à la console la valeur de fixedNum de l'objet 'b' (qui devrait être la même que celle de 'a', puisque 'b' a été créé comme une copie de 'a').
	std::cout << c.getRawBits() << std::endl; // Affiche à la console la valeur de fixedNum de l'objet 'c' (qui devrait être la même que celle de 'b', puisque 'c' a été assigné la valeur de 'b').

	return (0); // Termine le programme principal avec le code de retour 0, indiquant que tout s'est bien passé.
}
