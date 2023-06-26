/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstride <rstride@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:13:28 by rstride           #+#    #+#             */
/*   Updated: 2023/06/26 14:44:11 by rstride          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// hitPoint_ = 100;
// energyPoint_ = 50;
// attackDamage_ = 20;

int main(void)
{
	ScavTrap st("Slime");

	st.attack("strong rabbit");
	st.takeDamage(80);
	st.beRepaired(30);

	st.guardGate();

//	for (int i=0; i<11; i++)
//	{
//		ScavTrap.attack("strong rabbit");
//	}
	return (0);
}	