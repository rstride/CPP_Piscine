/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 09:18:54 by rstride           #+#    #+#             */
/*   Updated: 2023/06/06 09:22:55 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
public :
	ClapTrap();
	ClapTrap(std::string const _name);

	virtual ~ClapTrap();

	ClapTrap(const ClapTrap &target);

	ClapTrap &operator= (const ClapTrap &target);

	virtual void attack(std::string const &_target);
	virtual void takeDamage(unsigned int _amount);
	virtual void beRepaired(unsigned int _amount);

private:
	std::string name_;
	int hitPoint_;
	unsigned int energyPoint_;
	unsigned int attackDamage_;


	virtual void printName(void);
};

#endif