/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 09:29:41 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:50:16 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
public:
	DiamondTrap();
	DiamondTrap(std::string _name);
	~DiamondTrap();
	DiamondTrap(const DiamondTrap &target);
	DiamondTrap &operator= (const DiamondTrap &target);

	int getHp(void) const;
	unsigned int getEp(void) const;
	unsigned int getAd(void) const;
	void whoAmI();


protected:
	std::string name_;
	int hitPoint_;
	unsigned int energyPoint_;
	unsigned int attackDamage_;
};

#endif