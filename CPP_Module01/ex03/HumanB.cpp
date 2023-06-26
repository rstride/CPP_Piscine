/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:06:01 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:46:53 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
	name_ = _name;
}

void HumanB::setWeapon(Weapon& _weapon)
{
	weapon_type_ = _weapon.getType();
}

void HumanB::attack(void)
{
	std::cout << name_ << " attacks with his " << weapon_type_ << std::endl;
}