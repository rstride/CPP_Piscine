/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 09:23:10 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:44:56 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructeur par défaut qui initialise tous les attributs à une valeur prédéfinie
ScavTrap::ScavTrap(void): ClapTrap()
{
	hitPoint_ = 100;
	energyPoint_ = 50;
	attackDamage_ = 20;
	std::cout << "[ ScavTrap is created. ]" << std::endl;
}

// Constructeur qui initialise tous les attributs à une valeur prédéfinie et attribue un nom à ScavTrap
ScavTrap::ScavTrap(std::string _name): ClapTrap(_name)
{
	name_ = _name;
	hitPoint_ = 100;
	energyPoint_ = 50;
	attackDamage_ = 20;
	std::cout << "[ ScavTrap \"" << name_ << "\" is created. ]" << std::endl;
}

// Destructeur qui affiche un message indiquant la destruction de ScavTrap
ScavTrap::~ScavTrap()
{
	std::cout << "[ ScavTrap \"" << name_ << "\" is destroyed. ]" << std::endl;
}

// Méthode qui simule ScavTrap entrant dans la garderie
void ScavTrap::guardGate()
{
	std::cout << "[ ScavTrap has entered the gate keeper board ]" << std::endl;
}

// Méthode qui simule une attaque en déduisant des points d'énergie à ScavTrap et affiche un message correspondant
void ScavTrap::attack(std::string const &_target)
{
	if (hitPoint_ <= 0)
	{
		printName();
		std::cout << " can't move... " << std::endl;
		return ;
	}
	if (energyPoint_ == 0)
	{
		printName();
		std::cout << " has no energy... " << std::endl;
		return ;
	}

	energyPoint_-= 10;
	printName();
	std::cout <<" attacks " << _target << ", ";
	std::cout <<"causing " << attackDamage_ << " points of damage! ";
	std::cout << "(energyPoint_ : " << energyPoint_ << ")" << std::endl;
}

// Méthode qui déduit des points de vie à ScavTrap et affiche un message correspondant
void ScavTrap::takeDamage(unsigned int _amount)
{
	hitPoint_ -= _amount;
	if (hitPoint_ < 0)
		hitPoint_ = 0;
	printName();
	std::cout <<"takes " << _amount << ", ";
	std::cout <<"points of damage!";
	std::cout <<"(HP : " << hitPoint_ << ")" << std::endl;
}

// Méthode qui ajoute des points de vie à ScavTrap et affiche un message correspondant
void ScavTrap::beRepaired(unsigned int _amount)
{
	hitPoint_ += _amount;

	printName();
	std::cout <<"has been repaired by " << _amount << ", ";
	std::cout <<"(HP : " << hitPoint_ << ")" << std::endl;
}

// Méthode qui affiche le nom de ScavTrap
void ScavTrap::printName()
{
	std::cout << "<" << "ScavTrap" << " \"";
	std::cout << name_ << "\" > ";
}