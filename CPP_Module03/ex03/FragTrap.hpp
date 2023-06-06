/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 09:27:19 by rstride           #+#    #+#             */
/*   Updated: 2023/06/06 09:35:02 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string _name);
	~FragTrap();
	FragTrap(const FragTrap &target);
	FragTrap &operator= (const FragTrap &target);
	void highFivesGuys();
	void printName() ;

	void attack(std::string const &_target) ;
	void takeDamage(unsigned int _amount) ;
	void beRepaired(unsigned int _amount) ;

	int getHp(void) const;
	unsigned int getEp(void) const;
	unsigned int getAd(void) const;

private:
	std::string name_;
	int hitPoint_;
	unsigned int energyPoint_;
	unsigned int attackDamage_;
};

#endif