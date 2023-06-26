/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 09:23:10 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:44:17 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructeur par défaut de ScavTrap. Il initialise les points de vie, les points d'énergie et les dégâts d'attaque.
// Il appelle aussi le constructeur par défaut de la classe parente (ClapTrap).
ScavTrap::ScavTrap(void): ClapTrap()
{
	hitPoint_ = 100;
	energyPoint_ = 50;
	attackDamage_ = 20;
	std::cout << "[ ScavTrap is created. ]" << std::endl;
}

// Constructeur qui prend en paramètre un nom. Il initialise les points de vie, les points d'énergie et les dégâts d'attaque.
// Il appelle aussi le constructeur de la classe parente (ClapTrap) qui prend en paramètre un nom.
ScavTrap::ScavTrap(std::string _name): ClapTrap(_name)
{
	name_ = _name;
	hitPoint_ = 100;
	energyPoint_ = 50;
	attackDamage_ = 20;
	std::cout << "[ ScavTrap \"" << name_ << "\" is created. ]" << std::endl;
}

// Destructeur de ScavTrap. Il affiche un message indiquant que l'objet est détruit.
ScavTrap::~ScavTrap()
{
	std::cout << "[ ScavTrap \"" << name_ << "\" is destroyed. ]" << std::endl;
}

// Méthode qui affiche un message indiquant que ScavTrap garde la porte.
void ScavTrap::guardGate()
{
	std::cout << "[ ScavTrap has entered the gate keeper board ]" << std::endl;

}

// Méthode pour attaquer une cible. Elle vérifie si ScavTrap a assez de points de vie et d'énergie pour attaquer.
// Si c'est le cas, elle réduit les points d'énergie et affiche un message indiquant que la cible a été attaquée et les dégâts infligés.
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

// Méthode qui réduit les points de vie de ScavTrap lorsque celui-ci prend des dégâts. Elle vérifie aussi si les points de vie sont inférieurs à 0, auquel cas elle les met à 0.
// Elle affiche un message indiquant que ScavTrap a pris des dégâts et les points de vie restants.
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

// Méthode qui augmente les points de vie de ScavTrap lorsqu'il est réparé. Elle affiche un message indiquant que ScavTrap a été réparé et les points de vie après réparation.
void ScavTrap::beRepaired(unsigned int _amount)
{
	hitPoint_ += _amount;

	printName();
	std::cout <<"has been repaired by " << _amount << ", ";
	std::cout <<"(HP : " << hitPoint_ << ")" << std::endl;

}

// Méthode qui affiche le nom de ScavTrap.
void ScavTrap::printName()
{
	std::cout << "<" << "ScavTrap" << " \"";
	std::cout << name_ << "\" > ";
}