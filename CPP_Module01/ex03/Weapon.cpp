/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:07:02 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:47:09 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _weapon_name)
{
	weapon_ = _weapon_name;
}

std::string Weapon::getType(void)
{
	return (weapon_);
}

void Weapon::setType(std::string _weapon_name)
{
	weapon_ = _weapon_name;
}