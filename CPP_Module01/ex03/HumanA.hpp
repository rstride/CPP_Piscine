/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:05:47 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:46:50 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA{
public:
	HumanA(std::string _name, Weapon& _type);
	void attack(void);
	
private:
	std::string name_;
	std::string weapon_type_;
};

#endif