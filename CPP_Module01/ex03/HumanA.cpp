/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:05:37 by rstride           #+#    #+#             */
/*   Updated: 2023/05/26 16:05:38 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon& _weapon)
{
	name_ = _name;
	weapon_type_ = _weapon.getType();
}

void HumanA::attack(void)
{
	std::cout << name_ << " attacks with his " << weapon_type_ << std::endl;
}