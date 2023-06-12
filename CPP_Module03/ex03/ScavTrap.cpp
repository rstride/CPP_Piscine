/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 09:23:10 by rstride           #+#    #+#             */
/*   Updated: 2023/06/07 14:49:17 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructeur par défaut qui initialise les points de vie, les points d'énergie et les dégâts d'attaque du ScavTrap
ScavTrap::ScavTrap(void)
{
	hitPoint_ = 100;
	energyPoint_ = 50;
	attackDamage_ = 20;
	std::cout << "[ ScavTrap is created. ]" << std::endl;
}

// Constructeur qui accepte un nom en paramètre et initialise les points de vie, les points d'énergie et les dégâts d'attaque du ScavTrap
ScavTrap::ScavTrap(std::string _name)
{
	name_ = _name;
	hitPoint_ = 100;
	energyPoint_ = 50;
	attackDamage_ = 20;
	std::cout << "[ ScavTrap \"" << name_ << "\" is created. ]" << std::endl;
}

// Destructeur qui affiche un message indiquant que le ScavTrap a été détruit
ScavTrap::~ScavTrap()
{
	if (name_ != "")
	{
		std::cout << "[ ScavTrap \"" << name_ << "\" is destroyed. ]" << std::endl;
	}
	else
	{
		std::cout << "[ ScavTrap is destroyed. ]" << std::endl;
	}
}

// Fonction membre qui affiche un message indiquant que le ScavTrap est en mode garde de porte
void ScavTrap::guardGate()
{
	std::cout << "[ ScavTrap has entered the gate keeper board ]" << std::endl;

}

// Constructeur de copie qui copie les attributs du ScavTrap cible dans le ScavTrap actuel
ScavTrap::ScavTrap(const ScavTrap &target)
{
	name_ = target.name_;
	hitPoint_ = target.hitPoint_;
}

// Surcharge de l'opérateur d'affectation qui copie les attributs du ScavTrap cible dans le ScavTrap actuel
ScavTrap &ScavTrap::operator=(const ScavTrap &target)
{
	name_ = target.name_;
	hitPoint_ = target.hitPoint_;
	energyPoint_ = target.energyPoint_;
	attackDamage_ = target.attackDamage_;

	return (*this);
}

// Méthode d'attaque qui décrémente les points d'énergie du ScavTrap et affiche un message indiquant la cible et les dégâts infligés
void ScavTrap::attack(std::string const &_target)
{
	//...
}

// Méthode qui gère les dégâts subis par le ScavTrap en décrémentant ses points de vie et en affichant un message indiquant les dégâts reçus
void ScavTrap::takeDamage(unsigned int _amount)
{
	//...
}

// Méthode qui gère la réparation du ScavTrap en augmentant ses points de vie et en affichant un message indiquant la quantité de points de vie récupérés
void ScavTrap::beRepaired(unsigned int _amount)
{
	//...
}

// Méthode qui affiche le nom du ScavTrap
void ScavTrap::printName()
{
	std::cout << "<" << "ScavTrap" << " \"";
	std::cout << name_ << "\" > ";
}

// Méthode qui renvoie les points de vie du ScavTrap
int ScavTrap::getHp() const
{
	return (hitPoint_);
}

// Méthode qui renvoie les points d'énergie du ScavTrap
unsigned int ScavTrap::getEp() const
{
	return (energyPoint_);
}

// Méthode qui renvoie les dégâts d'attaque du ScavTrap
unsigned int ScavTrap::getAd() const
{
	return (attackDamage_);
}
