/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 09:18:21 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:43:54 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructeur par défaut
ClapTrap::ClapTrap(void)
{
    hitPoint_ = 10;  // Initialise les points de vie à 10
    energyPoint_ = 10; // Initialise les points d'énergie à 10
    attackDamage_ = 0; // Initialise les dégâts d'attaque à 0
    std::cout << "[ ClapTrap is created. ]" << std::endl;  // Affiche un message indiquant la création d'un objet ClapTrap
}

// Constructeur avec nom en paramètre
ClapTrap::ClapTrap(std::string _name)
{
    name_ = _name; // Initialise le nom avec le paramètre fourni
    hitPoint_ = 10; // Initialise les points de vie à 10
    energyPoint_ = 10; // Initialise les points d'énergie à 10
    attackDamage_ = 0; // Initialise les dégâts d'attaque à 0
    std::cout << "[ ClapTrap \"" << name_ << "\" is created. ]" << std::endl; // Affiche un message indiquant la création d'un objet ClapTrap
}

// Destructeur
ClapTrap::~ClapTrap()
{
    if (name_ != "")
    {
        std::cout << "[ ClapTrap \"" << name_ << "\" is destroyed. ]" << std::endl; // Affiche un message indiquant la destruction d'un objet ClapTrap nommé
    }
    else
    {
        std::cout << "[ ClapTrap is destroyed. ]" << std::endl; // Affiche un message indiquant la destruction d'un objet ClapTrap anonyme
    }
}

// Constructeur de copie
ClapTrap::ClapTrap(const ClapTrap &target)
{
    name_ = target.name_; // Copie le nom de l'objet passé en paramètre
    hitPoint_ = target.hitPoint_; // Copie les points de vie de l'objet passé en paramètre
}

// Surcharge de l'opérateur d'affectation
ClapTrap &ClapTrap::operator=(const ClapTrap &target)
{
    name_ = target.name_; // Copie le nom de l'objet passé en paramètre
    hitPoint_ = target.hitPoint_; // Copie les points de vie de l'objet passé en paramètre
    energyPoint_ = target.energyPoint_; // Copie les points d'énergie de l'objet passé en paramètre
    attackDamage_ = target.attackDamage_; // Copie les dégâts d'attaque de l'objet passé en paramètre

    return (*this); // Retourne une référence à l'objet courant
}

// Attaque une cible
void ClapTrap::attack(std::string const &_target)
{
    // Vérifie si ClapTrap est en vie
    if (hitPoint_ <= 0)
    {
        printName();
        std::cout << " can't move... " << std::endl; // Si non, affiche un message et arrête la fonction
        return ;
    }

    // Vérifie si ClapTrap a assez d'énergie
    if (energyPoint_ == 0)
    {
        printName();
        std::cout << " has no energy... " << std::endl; // Si non, affiche un message et arrête la fonction
        return ;
    }

    // Effectue l'attaque
    energyPoint_-= 10; // Déduit l'énergie utilisée
    printName();
    std::cout <<" attacks " << _target << ", causing " << attackDamage_ << " points of damage! (energyPoint_ : " << energyPoint_ << ")" << std::endl; // Affiche un message d'attaque
}

// Prend des dégâts
void ClapTrap::takeDamage(unsigned int _amount)
{
    hitPoint_ -= _amount; // Déduit les points de vie perdus
    if (hitPoint_ < 0)
        hitPoint_ = 0; // Assure que les points de vie ne descendent pas en dessous de zéro
    printName();
    std::cout <<"takes " << _amount << ", points of damage! (HP : " << hitPoint_ << ")" << std::endl; // Affiche un message indiquant les dégâts pris
}

// Répare ClapTrap
void ClapTrap::beRepaired(unsigned int _amount)
{
    hitPoint_ += _amount; // Ajoute des points de vie
    printName();
    std::cout <<"has been repaired by " << _amount << ", (HP : " << hitPoint_ << ")" << std::endl; // Affiche un message indiquant la réparation
}

// Affiche le nom de ClapTrap
void ClapTrap::printName()
{
    std::cout << "<" << "ClapTrap" << " \"" << name_ << "\" > "; // Affiche le nom dans un format spécifique
}
