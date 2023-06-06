/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 09:23:10 by rstride           #+#    #+#             */
/*   Updated: 2023/06/06 09:36:05 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	hitPoint_ = 100;
	energyPoint_ = 50;
	attackDamage_ = 20;
	std::cout << "[ ScavTrap is created. ]" << std::endl;
}

ScavTrap::ScavTrap(std::string _name)
{
	name_ = _name;
	hitPoint_ = 100;
	energyPoint_ = 50;
	attackDamage_ = 20;
	std::cout << "[ ScavTrap \"" << name_ << "\" is created. ]" << std::endl;
}

ScavTrap::~ScavTrap()
{
	if (name_ != "")
	{
		std::cout << "[ ScavTrap \"" << name_ << "\" is destroyed. ]" << std::endl;
	}
	else
	{
		std::cout << "[ ScavTrap is destroyed. ]" << std::endl;
	}}

void ScavTrap::guardGate()
{
	std::cout << "[ ScavTrap has entered the gate keeper board ]" << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap &target)
{
	name_ = target.name_;
	hitPoint_ = target.hitPoint_;
}


ScavTrap &ScavTrap::operator=(const ScavTrap &target)
{
	name_ = target.name_;
	hitPoint_ = target.hitPoint_;
	energyPoint_ = target.energyPoint_;
	attackDamage_ = target.attackDamage_;

	return (*this);
}


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
void ScavTrap::beRepaired(unsigned int _amount)
{
	hitPoint_ += _amount;

	printName();
	std::cout <<"has been repaired by " << _amount << ", ";
	std::cout <<"(HP : " << hitPoint_ << ")" << std::endl;

}

void ScavTrap::printName()
{
	std::cout << "<" << "ScavTrap" << " \"";
	std::cout << name_ << "\" > ";
}

int ScavTrap::getHp() const
{
	return (hitPoint_);
}

unsigned int ScavTrap::getEp() const
{
	return (energyPoint_);
}

unsigned int ScavTrap::getAd() const
{
	return (attackDamage_);
}
