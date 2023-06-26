/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:06:14 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:46:58 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB{
public:
	HumanB(std::string _name);
	void setWeapon(Weapon& _weapon);
	void attack(void);

private:
	std::string name_;
	std::string weapon_type_;
};
#endif