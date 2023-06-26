/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 09:27:03 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:44:41 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructeur par défaut qui initialise tous les attributs à une valeur prédéfinie
FragTrap::FragTrap(void): ClapTrap()
{
	hitPoint_ = 100;
	energyPoint_ = 100;
	attackDamage_ = 30;
	std::cout << "[ FragTrap is created. ]" << std::endl;
}

// Constructeur qui initialise tous les attributs à une valeur prédéfinie et attribue un nom à FragTrap
FragTrap::FragTrap(std::string _name): ClapTrap(_name)
{
	name_ = _name;
	hitPoint_ = 100;
	energyPoint_ = 100;
	attackDamage_ = 30;
	std::cout << "[ FragTrap \"" << name_ << "\" is created. ]" << std::endl;
}

// Destructeur qui affiche un message indiquant la destruction de FragTrap
FragTrap::~FragTrap()
{
	std::cout << "[ FragTrap \"" << name_ << "\" is destroyed. ]" << std::endl;
}

// Méthode qui simule un high five de FragTrap
void FragTrap::highFivesGuys()
{
	std::cout << "[ FragTrap gives a high five ]" << std::endl;
}

// Méthode qui simule une attaque en déduisant des points d'énergie à FragTrap et affiche un message correspondant
void FragTrap::attack(std::string const &_target)
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

// Méthode qui déduit des points de vie à FragTrap et affiche un message correspondant
void FragTrap::takeDamage(unsigned int _amount)
{
	hitPoint_ -= _amount;
	if (hitPoint_ < 0)
		hitPoint_ = 0;
	printName();
	std::cout <<"takes " << _amount << ", ";
	std::cout <<"points of damage!";
	std::cout <<"(HP : " << hitPoint_ << ")" << std::endl;
}

// Méthode qui ajoute des points de vie à FragTrap et affiche un message correspondant
void FragTrap::beRepaired(unsigned int _amount)
{
	hitPoint_ += _amount;

	printName();
	std::cout <<"has been repaired by " << _amount << ", ";
	std::cout <<"(HP : " << hitPoint_ << ")" << std::endl;
}

// Méthode qui affiche le nom de FragTrap
void FragTrap::printName()
{
	std::cout << "<" << "FragTrap" << " \"";
	std::cout << name_ << "\" > ";
}
