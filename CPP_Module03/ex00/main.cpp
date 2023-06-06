/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:13:28 by rstride           #+#    #+#             */
/*   Updated: 2023/06/06 11:18:41 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    // Crée un ClapTrap nommé "Slime"
    ClapTrap claptrap("Slime");

    // Attaque un "strong rabbit"
    claptrap.attack("strong rabbit");

    // Subit 8 points de dégâts, puis 3 points supplémentaires
    claptrap.takeDamage(8);
    claptrap.takeDamage(3);

    // Se répare de 30 points
    claptrap.beRepaired(30);

    // Attaque à nouveau le "strong rabbit"
    claptrap.attack("strong rabbit");

    // Fin du programme
    return (0);
}
