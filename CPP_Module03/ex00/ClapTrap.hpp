/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 09:18:54 by rstride           #+#    #+#             */
/*   Updated: 2023/06/06 11:18:27 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
public :
    // Constructeur par défaut
    ClapTrap();
    // Constructeur prenant un nom en paramètre
    ClapTrap(std::string const _name);

    // Destructeur
    ~ClapTrap();

    // Constructeur de copie
    ClapTrap(const ClapTrap &target);

    // Surcharge de l'opérateur d'affectation
    ClapTrap &operator= (const ClapTrap &target);

    // Méthode pour attaquer une cible
    void attack(std::string const &_target);

    // Méthode pour recevoir des dégâts
    void takeDamage(unsigned int _amount);

    // Méthode pour se faire réparer
    void beRepaired(unsigned int _amount);

private:
    // Variables pour le nom, les points de vie, les points d'énergie et les dégâts d'attaque
    std::string name_;
    int hitPoint_;
    unsigned int energyPoint_;
    unsigned int attackDamage_;

    // Méthode privée pour afficher le nom
    void printName(void);
};

#endif 
