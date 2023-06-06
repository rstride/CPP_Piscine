/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 09:18:21 by rstride           #+#    #+#             */
/*   Updated: 2023/06/06 11:27:45 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructeur par défaut qui initialise tous les attributs à une valeur prédéfinie
ClapTrap::ClapTrap(void)
{
	hitPoint_ = 10;
	energyPoint_ = 10;
	attackDamage_ = 0;
	std::cout << "[ ClapTrap is created. ]" << std::endl;
}

// Constructeur qui initialise tous les attributs à une valeur prédéfinie et attribue un nom à ClapTrap
ClapTrap::ClapTrap(std::string _name)
{
	name_ = _name;
	hitPoint_ = 10;
	energyPoint_ = 10;
	attackDamage_ = 0;
	std::cout << "[ ClapTrap \"" << name_ << "\" is created. ]" << std::endl;
}

// Destructeur qui affiche un message indiquant la destruction de ClapTrap
ClapTrap::~ClapTrap()
{
	if (name_ != "")
	{
		std::cout << "[ ClapTrap \"" << name_ << "\" is destroyed. ]" << std::endl;
	}
	else
	{
		std::cout << "[ ClapTrap is destroyed. ]" << std::endl;
	}
}

// Constructeur de copie qui crée une nouvelle instance de ClapTrap avec les mêmes attributs que celle passée en paramètre
ClapTrap::ClapTrap(const ClapTrap &target)
{
	name_ = target.name_;
	hitPoint_ = target.hitPoint_;
}

// Surcharge de l'opérateur d'affectation qui copie tous les attributs de la cible à l'instance actuelle
ClapTrap &ClapTrap::operator=(const ClapTrap &target)
{
	name_ = target.name_;
	hitPoint_ = target.hitPoint_;
	energyPoint_ = target.energyPoint_;
	attackDamage_ = target.attackDamage_;

	return (*this);
}

// Méthode qui simule une attaque en déduisant des points d'énergie à ClapTrap et affiche un message correspondant
void ClapTrap::attack(std::string const &_target)
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

// Méthode qui déduit des points de vie à ClapTrap et affiche un message correspondant
void ClapTrap::takeDamage(unsigned int _amount)
{
	hitPoint_ -= _amount;
	if (hitPoint_ < 0)
		hitPoint_ = 0;
	printName();
	std::cout <<"takes " << _amount << ", ";
	std::cout <<"points of damage!";
	std::cout <<"(HP : " << hitPoint_ << ")" << std::endl;
}

// Méthode qui ajoute des points de vie à ClapTrap et affiche un message correspondant
void ClapTrap::beRepaired(unsigned int _amount)
{
	hitPoint_ += _amount;

	printName();
	std::cout <<"has been repaired by " << _amount << ", ";
	std::cout <<"(HP : " << hitPoint_ << ")" << std::endl;
}

// Méthode qui affiche le nom de ClapTrap
void ClapTrap::printName()
{
	std::cout << "<" << "ClapTrap" << " \"";
	std::cout << name_ << "\" > ";
}
